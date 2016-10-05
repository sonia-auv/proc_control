package ca.etsmtl.sonia.auv6.controllers;

import java.util.List;

import ca.etsmtl.octets.jaus.lib.mobility.PrimitiveDriverService;
import ca.etsmtl.octets.jaus.lib.mobility.message.record.WrenchEffortRec;
import ca.etsmtl.sonia.auv6.devices.Thruster;
import ca.etsmtl.sonia.auv6.util.Vector3f;

/**
 * <p>
 * Title:
 * </p>
 * <p>
 * Description:
 * </p>
 * <p>
 * Copyright: Copyright (c) 2010
 * </p>
 * <p>
 * Company: Club SONIA, �cole de technologie sup�rieure
 * </p>
 * 
 * @author Simon Bolduc <bolduc.sim@gmail.com>
 * @author Francois Campeau <boulette42@gmail.com>
 * @version $Revision$
 */
public class ThrusterController extends Controller {

	private final List<Thruster> thrusters;
	private Vector3f linearEffort = new Vector3f(0, 0, 0);
	private Vector3f rotationnalEffort = new Vector3f(0, 0, 0);
	private final static int POWER_LIMIT_BEFORE_LUT = 43;
	private double limit_ratio_Y;
	private double limit_ratio_Y_temp;
	private PrimitiveDriverService primitiveDriverService;

	public ThrusterController(List<Thruster> thrusters) {
		this.thrusters = thrusters;
		loop.registerController(this);

		enabled = true;
	}

	public void commit() {
		if (enabled) {
			limit_ratio_Y = 0;
			for (Thruster t : thrusters) {
				Vector3f thrusterEffort = t.getThrusterEffort();
				int thrusterRotationnalEffort = t
						.getThrusterRotationnalEffort();
				// 2014-10-31 KC Change to limit Thruster effort earlier in the
				// process to 24 (55% from lookup table)
				double pretendedLinearEffortYTarget = linearEffort.getY()
						* thrusterEffort.getY();
				double pretendedLinearEffortXTarget = linearEffort.getX()
						* thrusterEffort.getX();
				double pretendedLinearEffortZTarget = linearEffort.getZ()
						* thrusterEffort.getZ();
				// -
				double pretendedRotationEffortZTargetY = rotationnalEffort.getZ()
						* thrusterEffort.getY()
						* thrusterRotationnalEffort;
				double pretendedRotationEffortZTargetX = rotationnalEffort.getZ()
						* thrusterEffort.getX()
						* thrusterRotationnalEffort;
				double pretendedRotationEffortYTarget = rotationnalEffort.getY()
						* thrusterEffort.getZ()
						* thrusterRotationnalEffort;
				if(pretendedLinearEffortYTarget < pretendedLinearEffortXTarget * 1.2){
					// -
					// We put a higher priority on rotation, since we should attain
					// this
					// goal faster.
					if ((Math.abs(pretendedLinearEffortYTarget)
							+ Math.abs(pretendedRotationEffortZTargetY)) > POWER_LIMIT_BEFORE_LUT) {
						// Setting the Y linear effort to what is left after rotational effort
						if ((POWER_LIMIT_BEFORE_LUT - Math.abs(pretendedRotationEffortZTargetY)) <= 0){
							linearEffort.setY(0);
							//-
						}
						else{
							linearEffort.setY(Math.signum(linearEffort.getY())
									* ((POWER_LIMIT_BEFORE_LUT - Math.abs(pretendedRotationEffortZTargetY)) / Math.abs(thrusterEffort.getY())));
						}
					}
				}
				else{
					// -
					// We put a higher priority on rotation, since we should attain
					// this
					// goal faster.
					if ((Math.abs(pretendedLinearEffortXTarget)
							+ Math.abs(pretendedRotationEffortZTargetX)) > POWER_LIMIT_BEFORE_LUT) {
						// Setting the Y linear effort to what is left after rotational effort
						if ((POWER_LIMIT_BEFORE_LUT - Math.abs(pretendedRotationEffortZTargetX)) <= 0){
							linearEffort.setX(0);
							//-
						}
						else{
							linearEffort.setX(Math.signum(linearEffort.getX())
									* ((POWER_LIMIT_BEFORE_LUT - Math.abs(pretendedRotationEffortZTargetX)) / Math.abs(thrusterEffort.getX())));
						}
					}

				}
				// We put a higher priority on rotation, since we should attain
				// this
				// goal faster.
				if ((Math.abs(pretendedLinearEffortZTarget)
						+ Math.abs(pretendedRotationEffortYTarget)) > POWER_LIMIT_BEFORE_LUT) {
					// Setting the Z linear effort to what is left after rotational effort
					if ((POWER_LIMIT_BEFORE_LUT - Math.abs(pretendedRotationEffortYTarget)) <= 0){
						linearEffort.setZ(0);

					}
					else{
						linearEffort
						.setZ(Math.signum(linearEffort.getZ())
								* ((POWER_LIMIT_BEFORE_LUT - Math.abs(pretendedRotationEffortYTarget)) / Math.abs(thrusterEffort.getZ())));

					}
				}

			}
			//-
			for (Thruster t : thrusters) {
				double target = 0;
				Vector3f thrusterEffort = t.getThrusterEffort();
				int thrusterRotationnalEffort = t
						.getThrusterRotationnalEffort();
				//-
				target += linearEffort.getX() * thrusterEffort.getX();
				target += linearEffort.getY() * thrusterEffort.getY();
				target += linearEffort.getZ() * thrusterEffort.getZ();
				//-
				//We use lateral thruster for rotating excepted if the lateral distance is 120%% higher than forward.
				if(linearEffort.getY() < linearEffort.getX() * 1.2 ){
					target += rotationnalEffort.getZ() * thrusterEffort.getY()
							* thrusterRotationnalEffort;
				}
				else{
					target += rotationnalEffort.getZ() * thrusterEffort.getX() * thrusterRotationnalEffort;
				}
				target += rotationnalEffort.getY() * thrusterEffort.getZ()
						* thrusterRotationnalEffort;

				t.setTargetLinear(target);
			}
		}
	}

	public double getPropulsiveLinearEffortX() {
		return linearEffort.getX();
	}

	public void setPropulsiveLinearEffortX(double value) {
		linearEffort.setX(value);
		updatePrimitiveDriver();
	}

	public double getPropulsiveLinearEffortY() {
		return linearEffort.getY();
	}

	public void setPropulsiveLinearEffortY(double value) {
		linearEffort.setY(value);
		updatePrimitiveDriver();
	}

	public double getPropulsiveLinearEffortZ() {
		return linearEffort.getZ();
	}

	public void setPropulsiveLinearEffortZ(double value) {
		linearEffort.setZ(value);
		updatePrimitiveDriver();
	}

	public double getPropulsiveRotationalEffortX() {
		return rotationnalEffort.getX();
	}

	public void setPropulsiveRotationalEffortX(double value) {
		rotationnalEffort.setX(value);
		updatePrimitiveDriver();
	}

	public double getPropulsiveRotationalEffortY() {
		return rotationnalEffort.getY();
	}

	public void setPropulsiveRotationalEffortY(double value) {
		rotationnalEffort.setY(value);
		updatePrimitiveDriver();
	}

	public double getPropulsiveRotationalEffortZ() {
		return rotationnalEffort.getZ();
	}

	public void setPropulsiveRotationalEffortZ(double value) {
		rotationnalEffort.setZ(value);
		updatePrimitiveDriver();
	}

	public void applyLinearEffort(Vector3f linearEffort) {
		this.linearEffort.setXYZ(linearEffort);
		updatePrimitiveDriver();
	}

	public void applyRotationalEffort(Vector3f rotationalEffort) {
		this.rotationnalEffort.setXYZ(rotationalEffort);
		updatePrimitiveDriver();
	}

	public void setPrimitiveDriverService(
			PrimitiveDriverService primitiveDriverService) {
		this.primitiveDriverService = primitiveDriverService;
	}

	private void updatePrimitiveDriver() {
		if (primitiveDriverService != null) {
			primitiveDriverService.updateEveryChange(WrenchEffortRec.class);
		}
	}
	private Thruster getThrusterByName(String name)
	{
		for (Thruster t : thrusters) {
			if( t.getName().equals(name) )
			{
				return t;
			}
		}
		return null;
		
	}
	
	public Thruster getPortThruster(){
		return getThrusterByName("PortThruster");
	}
	public Thruster getStarboardThruster(){
		return getThrusterByName("StarboardThruster");
	}
	public Thruster getFrontHeadingThruster(){
		return getThrusterByName("FrontHeadingThruster");
	}
	public Thruster getBackHeadingThruster(){
		return getThrusterByName("BackHeadingThruster");
	}
	public Thruster getBackDepthThruster(){
		return getThrusterByName("BackDepthThruster");
	}
	public Thruster getFrontDepthThruster(){
		return getThrusterByName("FrontDepthThruster");
	}
}
