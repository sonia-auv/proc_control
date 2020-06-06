package ca.etsmtl.sonia.auv6.controllers.pid;

public class PIDValues {

	private double p, i, d, iLimit, pMultiplier, minErrorThreshold, maxErrorThreshold, iMultiplier, maxSpeed, k,
			clipAdjust, deadZone, deadZoneClip, pidEffort, feedBack, estimatedVelocity, meanVelocity;
	private boolean iMultiplierOn;

	public PIDValues(double p, double i, double d, double iLimit, double pMultiplier, double minErrorThreshold,
			double maxErrorThreshold, boolean iMultiplierOn, double iMultiplier, double maxSpeed, double k,
			double clipAdjust, double deadZone, double deadZoneClip, double pidEffort, double feedBack,
			double estimatedVelocity, double meanVelocity) {
		this.p = p;
		this.i = i;
		this.d = d;
		this.iLimit = iLimit;
		this.pMultiplier = pMultiplier;
		this.minErrorThreshold = minErrorThreshold;
		this.maxErrorThreshold = maxErrorThreshold;
		this.iMultiplierOn = iMultiplierOn;
		this.iMultiplier = iMultiplier;
		this.maxSpeed = maxSpeed;
		this.k = k;
		this.clipAdjust = clipAdjust;
		this.deadZone = deadZone;
		this.deadZoneClip = deadZoneClip;

		this.pidEffort = pidEffort;
		this.feedBack = feedBack;
		this.estimatedVelocity = estimatedVelocity;
		this.meanVelocity = meanVelocity;
	}

	public double getP() {
		return p;
	}

	public void setP(double p) {
		this.p = p;
	}

	public double getI() {
		return i;
	}

	public void setI(double i) {
		this.i = i;
	}

	public double getD() {
		return d;
	}

	public void setD(double d) {
		this.d = d;
	}

	public double getiLimit() {
		return iLimit;
	}

	public void setiLimit(double iLimit) {
		this.iLimit = iLimit;
	}

	public double getpMultiplier() {
		return pMultiplier;
	}

	public void setpMultiplier(double pMultiplier) {
		this.pMultiplier = pMultiplier;
	}

	public double getMinErrorThreshold() {
		return minErrorThreshold;
	}

	public void setMinErrorThreshold(double minErrorThreshold) {
		this.minErrorThreshold = minErrorThreshold;
	}

	public double getMaxErrorThreshold() {
		return maxErrorThreshold;
	}

	public void setMaxErrorThreshold(double maxErrorThreshold) {
		this.maxErrorThreshold = maxErrorThreshold;
	}

	public boolean getiMultiplierOn() {
		return iMultiplierOn;
	}

	public void setiMultiplierOn(boolean iMultiplierOn) {
		this.iMultiplierOn = iMultiplierOn;
	}

	public double getiMultiplier() {
		return iMultiplier;
	}

	public void setiMultiplier(double iMultiplier) {
		this.iMultiplier = iMultiplier;
	}

	public double getMaxSpeed() {
		return maxSpeed;
	}

	public void setMaxSpeed(double maxSpeed) {
		this.maxSpeed = maxSpeed;
	}

	public double getK() {
		return k;
	}

	public void setK(double k) {
		this.k = k;
	}

	public double getClipAdjust() {
		return clipAdjust;
	}

	public void setClipAdjust(double clipAdjust) {
		this.clipAdjust = clipAdjust;
	}

	public double getDeadZone() {
		return deadZone;
	}

	public void setDeadZone(double deadZone) {
		this.deadZone = deadZone;
	}

	public double getDeadZoneClip() {
		return deadZoneClip;
	}

	public void setDeadZoneClip(double deadZoneClip) {
		this.deadZoneClip = deadZoneClip;
	}

	public double getPidEffort() {
		return pidEffort;
	}

	public void setPidEffort(double pidEffort) {
		this.pidEffort = pidEffort;
	}

	public double getFeedBack() {
		return feedBack;
	}

	public void setFeedBack(double feedBack) {
		this.feedBack = feedBack;
	}

	public double getEstimatedVelocity() {
		return estimatedVelocity;
	}

	public void setEstimatedVelocity(double estimatedVelocity) {
		this.estimatedVelocity = estimatedVelocity;
	}

	public double getMeanVelocity() {
		return meanVelocity;
	}

	public void setMeanVelocity(double meanVelocity) {
		this.meanVelocity = meanVelocity;
	}

	@Override
	public String toString() {
		return "P:" + p + " I:" + i + " D:" + d + " I Limit:" + iLimit + " P Multiplier:" + pMultiplier
				+ " Minimum Error Threshold:" + minErrorThreshold + " Maximum Error Threshold:" + maxErrorThreshold
				+ " I Multiplier On:" + iMultiplierOn + " I Multiplier:" + iMultiplier + " Max Speed:" + maxSpeed
				+ " K:" + k + " Clip Adjust:" + clipAdjust + " Dead Zone: " + deadZone + " Dead Zone Clip:"
				+ deadZoneClip + "\n Calcul section: Pid effort:" + pidEffort + " Feed Back:" + feedBack
				+ " Estimated Velocity:" + estimatedVelocity + " Mean Velocity:" + meanVelocity;
	}

}
