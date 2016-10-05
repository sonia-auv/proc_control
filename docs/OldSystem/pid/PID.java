package ca.etsmtl.sonia.auv6.controllers.pid;

import java.text.DecimalFormat;
import java.util.ArrayList;
import java.util.List;

import ca.etsmtl.sonia.auv6.config.ConfigValue;

//merge
public class PID {
	private double integrationSum;
	// private double lastTime, lastError;
	private double lastTime, lastError, lastVelocity, lastWrench;

	private ConfigValue<Double> p, i, d, iLimit, pMultiplier, maxActuation, minActuation, minErrorThreshold,
			maxErrorThreshold, maxSpeed, iMultiplier;

	private ConfigValue<Boolean> iMultiplierOn;
	private static ArrayList<Double> timeList, errorList, outputList, adjustmentList;

	// Close PID: k, clipAdjustValue, deadZone, deadZoneClip
	private ConfigValue<Double> k, clipWrench, clipAdjust, deadZone, deadZoneClip, thrusterEffort;

	private List<Double> wrenchVelocityTable;

	// CLose PID: for reading only
	double pidEffort; // output
	double feedBack;// adjustment
	double estimatedVelocity;// lastEstimatedVelocity
	double meanVelocity;

	public PID(String key) {
		this(key, null);// For PID that are not using wrench vs velocity
						// adjustment lookup table
	}

	public PID(String key, List<Double> wrenchVelocityTable) {
		p = new ConfigValue<Double>(key + ".p", Double.class);
		i = new ConfigValue<Double>(key + ".i", Double.class);
		d = new ConfigValue<Double>(key + ".d", Double.class);
		iLimit = new ConfigValue<Double>(key + ".iLimit", Double.class);
		pMultiplier = new ConfigValue<Double>(key + ".pMultiplier", Double.class);
		maxActuation = new ConfigValue<Double>(key + ".maxActuation", Double.class);
		minActuation = new ConfigValue<Double>(key + ".minActuation", Double.class);

		minErrorThreshold = new ConfigValue<Double>(key + ".error.threshold.min", Double.class);
		maxErrorThreshold = new ConfigValue<Double>(key + ".error.threshold.max", Double.class);

		iMultiplierOn = new ConfigValue<Boolean>(key + ".iMultiplierOn", Boolean.class);
		maxSpeed = new ConfigValue<Double>(key + ".maxSpeed", Double.class);
		iMultiplier = new ConfigValue<Double>(key + ".iMultiplier", Double.class);
		lastTime = 0;
		lastError = 0;
		lastVelocity = 0;
		lastWrench = 0;

		pidEffort = 0; // output
		feedBack = 0;// adjustment
		estimatedVelocity = 0;// lastEstimatedVelocity
		meanVelocity = 0;

		k = new ConfigValue<Double>(key + ".k", Double.class);
		clipWrench = new ConfigValue<Double>(key + ".clipWrench", Double.class);
		clipAdjust = new ConfigValue<Double>(key + ".clipAdjust", Double.class);
		deadZone = new ConfigValue<Double>(key + ".deadZone", Double.class);
		deadZoneClip = new ConfigValue<Double>(key + ".deadZoneClip", Double.class);

		thrusterEffort = new ConfigValue<Double>(key + ".thrusterEffort", Double.class);// should
																						// not
																						// be
																						// hardcoded

		timeList = new ArrayList<Double>();
		errorList = new ArrayList<Double>();
		outputList = new ArrayList<Double>();
		adjustmentList = new ArrayList<Double>();

		this.wrenchVelocityTable = wrenchVelocityTable;

		/*
		 * DecimalFormat df = new DecimalFormat("#.##");
		 * df.setMaximumFractionDigits(2); df.setMinimumFractionDigits(2);
		 * df.setGroupingUsed(false);
		 * 
		 * System.out.println(df.format(lastWrench) + "," +
		 * df.format(k.getValue()) + "," + df.format(clipWrench.getValue()) +
		 * "," + df.format(clipAdjust.getValue()) + "," +
		 * df.format(deadZone.getValue()) + "," +
		 * df.format(deadZoneClip.getValue()) + "," +
		 * df.format(thrusterEffort.getValue()));
		 * 
		 * if (wrenchVelocityTable != null) { for (Double n :
		 * this.wrenchVelocityTable) { System.out.print(df.format(n) + ":"); }
		 * 
		 * System.out.println("\n"); System.out.println("*****************" +
		 * this.wrenchVelocityTable.get(0)); }
		 */
	}

	public double getValueForErrorWithAdjustment(double inputError, double velocity) {
		double nowTime = System.nanoTime() / 1E9; // Current timestamp
		double deltaTime = nowTime - lastTime; // Time since last integration

		// int lastThrusterEffort = (int) (lastWrench *
		// thrusterEffort.getValue());
		int lastThrusterEffort = (int) (lastWrench);

		// Clip thrusterEffort to 100 & Get estimation of velocity for last
		// control loop time
		estimatedVelocity = calculEstimateVelocity(thrusterEffortClip(lastThrusterEffort));

		// using velocity estimation mean velocity during last control loop
		meanVelocity = calculMeanVelocity(velocity, lastVelocity);

		// delta between the estimated and real velocity and Clip output value
		// to maximum value
		feedBack = feedBackWithClipAdjust(calculFeedBack(k.getValue(), diffVelocity(estimatedVelocity, meanVelocity)));

		// compute transfer function and clip it if needed
		pidEffort = deadZoneOfPidEffort(pidEffortWithClipWrench(calculPidEffort(feedBack, inputError, deltaTime)));

		// Persist values: wrench value (motor force in percent) without the
		// adjustment
		lastVelocity = velocity * -1;
		lastWrench = pidEffort - feedBack;
		lastTime = nowTime;
		lastError = inputError;

		DecimalFormat df = new DecimalFormat("#.##");
		df.setMaximumFractionDigits(2);
		df.setMinimumFractionDigits(2);
		df.setGroupingUsed(false);

		/*
		 * System.out.println("iE:" + df.format(inputError) + "," + "lW:" +
		 * df.format(lastWrench) + "," + "lTE:" + df.format(lastThrusterEffort)
		 * + "," + "lEV:" + df.format(estimatedVelocity) + "," + "mV:" +
		 * df.format(meanVelocity) + "," + "dV:" +
		 * df.format(diffVelocity(estimatedVelocity, meanVelocity)) + "," + "a:"
		 * + df.format(feedBack) + "," + "o:" + df.format(pidEffort) + "," +
		 * "lV:" + df.format(lastVelocity) + "," + "v:" + df.format(velocity) +
		 * "," + "k:" + df.format(k.getValue()));
		 */
		timeList.add(deltaTime);
		errorList.add(inputError);
		outputList.add(pidEffort);
		adjustmentList.add(feedBack);

		return pidEffort;
	}

	private double deadZoneOfPidEffort(double pidEffort) {
		if (Math.abs(pidEffort) < (deadZoneClip.getValue() / thrusterEffort.getValue())) {
			pidEffort = 0;
		} else if (Math.abs(pidEffort) < (deadZone.getValue() / thrusterEffort.getValue())) {
			pidEffort = Math.signum(pidEffort) * (deadZone.getValue() / thrusterEffort.getValue());
		}// else do nothing
		return pidEffort;
	}

	private double pidEffortWithClipWrench(double pidEffort) {
		return Math.abs(pidEffort) > clipWrench.getValue() ? Math.signum(pidEffort) * clipWrench.getValue() : pidEffort;
	}

	private double calculPidEffort(double feedBack, double inputError, double deltaTime) {
		// Compute and add the derivative gain term
		double speed = (inputError - lastError) / (deltaTime);

		return p.getValue() * inputError + d.getValue() * speed + feedBack;
	}

	private double feedBackWithClipAdjust(double feedBack) {
		return Math.abs(feedBack) > clipAdjust.getValue() ? Math.signum(feedBack) * clipAdjust.getValue() : feedBack;
	}

	private double calculFeedBack(double k, double delta) {
		return k * delta;
	}

	private double calculEstimateVelocity(int lastThrusterEffort) {
		return Math.copySign(wrenchVelocityTable.get(Math.abs(lastThrusterEffort)), lastThrusterEffort);
	}

	private int thrusterEffortClip(int lastThrusterEffort) {
		return Math.abs(lastThrusterEffort) > 100 ? (int) Math.copySign(100, lastThrusterEffort) : lastThrusterEffort;
	}

	private double calculMeanVelocity(double velocity, double lastVelocity) {
		return (velocity * -1 + lastVelocity) / 2.0d;
	}

	private double diffVelocity(double estimatedVelocity, double meanVelocity) {
		return estimatedVelocity - meanVelocity;
	}

	public double getValueForError(double error) {
		double nowTime = System.nanoTime() / 1E9; // Current timestamps
		double deltaTime = nowTime - lastTime; // Time since last integration
		double actuation = 0; // Actuation (output of PID block)
		
		// FIXME : Figure out what is the heuristic behind this
		/*if (iMultiplierOn.getValue()) {
			if (error > 0.0 && error < 0.30) {
				return -8;
			}
		}*/
		
		// Compute and add the proportional gain term
		actuation = (p.getValue() * error);
		
		// Compute and add the derivative gain term
		actuation += d.getValue() * ( (error - lastError) / (deltaTime) );
		
		// Integrate cumulative error
		integrationSum += (error * deltaTime);
		// Reset I if position crosses target (if error is 0 or changes sign)
		if ( (Math.signum(error) != Math.signum(lastError)) || (error == 0.0) ) {
			integrationSum = 0;
		} else {
			// Clip I to prevent Integral WindUp
			integrationSum = Math.min( Math.max(integrationSum, -(iLimit.getValue().doubleValue())), 
										iLimit.getValue().doubleValue() );
			actuation += (i.getValue() * integrationSum);
		}

		// Clip Actuation
		actuation = Math.min( Math.max(actuation, minActuation.getValue().doubleValue()),
								maxActuation.getValue().doubleValue() );

		// Persist all the previous values
		lastTime = nowTime;
		lastError = error;

		return actuation;
	}

	public void setValues(PIDValues values) {
		p.setValue(values.getP());
		i.setValue(values.getI());
		d.setValue(values.getD());
		iLimit.setValue(values.getiLimit());
		pMultiplier.setValue(values.getpMultiplier());
		minErrorThreshold.setValue(values.getMinErrorThreshold());
		maxErrorThreshold.setValue(values.getMaxErrorThreshold());
		iMultiplierOn.setValue(values.getiMultiplierOn());
		iMultiplier.setValue(values.getiMultiplier());
		maxSpeed.setValue(values.getMaxSpeed());

		k.setValue(values.getK());
		clipAdjust.setValue(values.getClipAdjust());
		deadZone.setValue(values.getDeadZone());
		deadZoneClip.setValue(values.getDeadZoneClip());

		pidEffort = values.getPidEffort();
		feedBack = values.getFeedBack();
		estimatedVelocity = values.getEstimatedVelocity();
		meanVelocity = values.getMeanVelocity();
	}

	// Close PID: k, clipAdjustValue, deadZone, deadZoneClip (be able to modify)
	public PIDValues getValues() {
		return new PIDValues(p.getValue(), i.getValue(), d.getValue(), iLimit.getValue(), pMultiplier.getValue(),
				minErrorThreshold.getValue(), maxErrorThreshold.getValue(), iMultiplierOn.getValue(),
				iMultiplier.getValue(), maxSpeed.getValue(), k.getValue(), clipAdjust.getValue(), deadZone.getValue(),
				deadZoneClip.getValue(), pidEffort, feedBack, estimatedVelocity, meanVelocity);
	}

	public static ArrayList<Double> getTimeList() {
		return timeList;
	}

	public static void setTimeList(ArrayList<Double> timeList) {
		PID.timeList = timeList;
	}

	public static ArrayList<Double> getErrorList() {
		return errorList;
	}

	public static void setErrorList(ArrayList<Double> errorList) {
		PID.errorList = errorList;
	}

	public static ArrayList<Double> getOutputList() {
		return outputList;
	}

	public static void setOutputList(ArrayList<Double> outputList) {
		PID.outputList = outputList;
	}

	public static ArrayList<Double> getAdjustmentList() {
		return adjustmentList;
	}

	public static void setAdjustmentList(ArrayList<Double> adjustmentList) {
		PID.adjustmentList = adjustmentList;
	}

	public double getThrusterEffort() {
		return thrusterEffort.getValue();
	}
}
