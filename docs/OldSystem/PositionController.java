package ca.etsmtl.sonia.auv6.controllers;

import java.util.Arrays;
import java.util.List;

import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;

import ca.etsmtl.octets.jaus.lib.mobility.LocalWaypointDriverService;
import ca.etsmtl.octets.jaus.lib.mobility.message.record.LocalWaypointRec;
import ca.etsmtl.sonia.auv6.config.ConfigValue;
import ca.etsmtl.sonia.auv6.controllers.pid.PID;
import ca.etsmtl.sonia.auv6.controllers.pid.PIDValues;
import ca.etsmtl.sonia.auv6.providers.DirectionProvider;
import ca.etsmtl.sonia.auv6.providers.LocationProvider;
import ca.etsmtl.sonia.auv6.util.NavUtil;
import ca.etsmtl.sonia.auv6.util.Point2D;
import ca.etsmtl.sonia.auv6.util.Util;
import ca.etsmtl.sonia.auv6.util.Vector3f;
import ca.etsmtl.sonia.jaus.lib.message.record.LocalWaypointBoundingBoxRec;
import ca.etsmtl.sonia.jaus.lib.message.record.PidRec;
import ca.etsmtl.sonia.jaus.lib.service.PidDriverService;

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
 * Company: Club SONIA, école de technologie supérieure
 * </p>
 * 
 * @author Francois Campeau <boulette42@gmail.com>
 * @author Maxime Lachapelle
 * @version $Revision$
 */
public class PositionController extends Controller {
	private final Log log = LogFactory.getLog(PositionController.class);
	private static final int DIVE_STABLE_COUNT = 20;
	private static final int HEADING_STABLE_COUNT = 20;
	private static final int WAYPOINT_STABLE_COUNT = 20;
	private static final double MIN_VALUE_BOUNDING_BOX_X = 0.05;
	private static final double MIN_VALUE_BOUNDING_BOX_Y = 0.05;
	private static final double MIN_VALUE_BOUNDING_BOX_Z = 0.05;
	//No more used
	/*private static final List<Double> propulsionWrenchVelocityTable = Arrays.asList(0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d,
			0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.01d, 0.02d, 0.03d, 0.04d, 0.05d, 0.06d, 0.06d, 0.06d, 0.09d, 0.10d,
			0.11d, 0.12d, 0.13d, 0.14d, 0.15d, 0.16d, 0.17d, 0.17d, 0.18d, 0.20d, 0.21d, 0.22d, 0.23d, 0.25d, 0.27d,
			0.28d, 0.30d, 0.31d, 0.32d, 0.33d, 0.34d, 0.36d, 0.37d, 0.38d, 0.39d, 0.40d, 0.42d, 0.43d, 0.45d, 0.45d,
			0.46d, 0.47d, 0.48d, 0.48d, 0.49d, 0.50d, 0.51d, 0.52d, 0.52d, 0.43d, 0.44d, 0.45d, 0.45d, 0.46d, 0.46d,
			0.47d, 0.48d, 0.49d, 0.49d, 0.51d, 0.52d, 0.53d, 0.54d, 0.55d, 0.56d, 0.57d, 0.58d, 0.58d, 0.58d, 0.58d,
			0.58d, 0.58d, 0.58d, 0.58d, 0.58d, 0.58d, 0.58d, 0.58d, 0.58d, 0.58d, 0.58d, 0.58d, 0.58d, 0.58d, 0.58d,
			0.58d, 0.58d, 0.58d, 0.58d);

	private static final List<Double> lateralWrenchVelocityTable = Arrays.asList(0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d,
			0.0d, 0.0d, 0.0d, 0.d, 0.0d, 0.0d, 0.01d, 0.01d, 0.01d, 0.02d, 0.02d, 0.02d, 0.02d, 0.03d, 0.03d, 0.04d,
			0.05d, 0.06d, 0.06d, 0.07d, 0.07d, 0.08d, 0.08d, 0.09d, 0.09d, 0.10d, 0.11d, 0.11d, 0.11d, 0.12d, 0.12d,
			0.12d, 0.12d, 0.13d, 0.13d, 0.13d, 0.14d, 0.14d, 0.14d, 0.14d, 0.14d, 0.15d, 0.15d, 0.15d, 0.15d, 0.15d,
			0.16d, 0.16d, 0.16d, 0.17d, 0.17d, 0.17d, 0.18d, 0.18d, 0.18d, 0.19d, 0.19d, 0.19d, 0.19d, 0.19d, 0.20d,
			0.20d, 0.20d, 0.20d, 0.20d, 0.20d, 0.20d, 0.20d, 0.20d, 0.20d, 0.20d, 0.20d, 0.20d, 0.20d, 0.20d, 0.20d,
			0.20d, 0.20d, 0.20d, 0.20d, 0.20d, 0.20d, 0.20d, 0.20d, 0.20d, 0.20d, 0.20d, 0.20d, 0.20d, 0.20d, 0.20d,
			0.20d, 0.20d, 0.20d, 0.20d);

	// .14 max going down, .24 going up
	private static final List<Double> depthWrenchVelocityTable = Arrays.asList(0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d,
			0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d,
			0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d,
			0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d,
			0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d,
			0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d, 0.0d,
			0.0d, 0.0d, 0.0d, 0.0d, 0.0d);
	 */
	// currentValues x,y,z,theta -> LocationProvider, DirectionProvider
	private Vector3f targetPosition = new Vector3f(0, 0, 0);
	private Vector3f linearEffort = new Vector3f(0, 0, 0);
	// x == roll, y == pitch, z == yaw
	private Vector3f targetDirection = new Vector3f(0, 0, 0);
	private Vector3f rotationalEffort = new Vector3f(0, 0, 0);

	private Waypoint waypoint = new Waypoint();

	private LocationProvider locationProvider;
	private DirectionProvider directionProvider;

	public ThrusterController thrusterController;

	private PID propulsionPID;
	private PID lateralPID;
	private PID depthPID;

	private PID yawPID;
	private PID pitchPID;

	private ConfigValue<Double> boundingBoxX, boundingBoxY, boundingBoxZ, boundingBoxHeading;
	private double constantDepthEffort;

	

	private int diveStableCount;
	private int headingStableCount;
	private int waypointStableCount;

	private LocalWaypointDriverService localWaypointDriverService;
	private PidDriverService pidDriverService;

	private boolean isControllingDepth;
	private boolean isControllingPitch;
	private boolean isControllingHeading;
	private boolean isControllingWaypoint;

	private Point2D overwiteWrenchPourcent;

	public PositionController(LocationProvider locationProvider, DirectionProvider directionProvider,
			ThrusterController thrusterController) {
		this.locationProvider = locationProvider;
		this.directionProvider = directionProvider;
		this.thrusterController = thrusterController;

		// close loop PID
		
		//-
		//No more used
		/*propulsionPID = new PID("auv.positionController.propulsion", propulsionWrenchVelocityTable);
		lateralPID = new PID("auv.positionController.lateral", lateralWrenchVelocityTable);
		depthPID = new PID("auv.positionController.depth", depthWrenchVelocityTable);*/
		//-
		
		propulsionPID = new PID("auv.positionController.propulsion");
		lateralPID = new PID("auv.positionController.lateral");
		depthPID = new PID("auv.positionController.depth");

		yawPID = new PID("auv.positionController.yaw");
		pitchPID = new PID("auv.positionController.pitch");

		boundingBoxX = new ConfigValue<Double>("auv.positionController.boundingBox.x", Double.class);
		boundingBoxY = new ConfigValue<Double>("auv.positionController.boundingBox.y", Double.class);
		boundingBoxZ = new ConfigValue<Double>("auv.positionController.boundingBox.z", Double.class);

		boundingBoxHeading = new ConfigValue<Double>("auv.positionController.boundingBox.heading", Double.class);
		
		constantDepthEffort = new ConfigValue<Double>("auv.positionController.depth.constantActuationEffort",Double.class).getValue();
		
		enabled = false;

		isControllingDepth = true;
		isControllingPitch = true;
		isControllingHeading = true;
		isControllingWaypoint = true;

		loop.registerController(this);
	}

	@Override
	public void commit() {
		if (enabled) {
			// reset linear effort vector
			linearEffort.setXYZ(0, 0, 0);
			Point2D localError = NavUtil.convertGlobalToLocal(new Point2D(waypoint.getX(), waypoint.getY()),
					locationProvider.getX(), locationProvider.getY(), directionProvider.getYaw());

			log.debug("Target: [" + waypoint.getX() + "," + waypoint.getY() + "]");
			log.debug("Current Position: [" + locationProvider.getX() + "," + locationProvider.getY() + "]");
			log.debug("Heading: " + directionProvider.getYaw());
			log.debug("Local target: [" + localError.getX() + "," + localError.getY() + "]");

			double errorZ = locationProvider.getZ() - waypoint.getZ();

			double actuationX, actuationY, actuationZ;

			actuationX = propulsionPID.getValueForError(localError.getX());			
			actuationY = lateralPID.getValueForError(localError.getY());
			actuationZ = depthPID.getValueForError(errorZ);
			
			//- Add a constant value for depth to compense flotability
			actuationZ += constantDepthEffort;
			
			log.debug("Actuation target: [" + actuationX + "," + actuationY + "]");

			if (isControllingWaypoint) {
				linearEffort.setX(actuationX);
				linearEffort.setY(actuationY);
			} else {
				linearEffort.setX(0);
				linearEffort.setY(0);
			}

			if (isControllingDepth) {
				linearEffort.setZ(actuationZ);
			} else {
				linearEffort.setZ(0);
			}

			double errorYaw = Util.getAngleDifference(directionProvider.getYaw(), waypoint.getYaw());
			double errorPitch = Util.getAngleDifference(directionProvider.getPitch(), waypoint.getPitch());

			double actuationYaw = yawPID.getValueForError(errorYaw);
			double actuationPitch = pitchPID.getValueForError(errorPitch);

			if (isControllingHeading) {
				rotationalEffort.setZ(actuationYaw);
			} else {
				rotationalEffort.setZ(0);
			}

			if (isControllingPitch) {
				rotationalEffort.setY(actuationPitch);
			} else {
				rotationalEffort.setY(0);
			}

			thrusterController.applyLinearEffort(linearEffort);
			thrusterController.applyRotationalEffort(rotationalEffort);

			double bBX = waypoint.getBoundingBoxX() == -1 ? boundingBoxX.getValue() : waypoint.getBoundingBoxX();
			double bBY = waypoint.getBoundingBoxY() == -1 ? boundingBoxY.getValue() : waypoint.getBoundingBoxY();
			double bBZ = waypoint.getBoundingBoxZ() == -1 ? boundingBoxZ.getValue() : waypoint.getBoundingBoxZ();
			double bBHeading = waypoint.getBoundingBoxHeading() == -1 ? boundingBoxHeading.getValue() : waypoint
					.getBoundingBoxHeading();

			if (Math.abs(localError.getX()) <= bBX && Math.abs(localError.getY()) <= bBY) {
				waypointStableCount++;
			} else if (waypointStableCount > 0) {
				waypointStableCount = 0;
			}

			if (Math.abs(errorZ) <= bBZ) {
				diveStableCount++;
			} else if (diveStableCount > 0) {
				diveStableCount = 0;
			}

			if (Math.abs(errorYaw) <= bBHeading) {
				headingStableCount++;
			} else if (headingStableCount > 0) {
				headingStableCount = 0;
			}
		}

	}

	public void setEnabled(boolean enabled) {
		super.setEnabled(enabled);

		if (enabled) {
			thrusterController.setEnabled(enabled);
		}

		diveStableCount = 0;
		headingStableCount = 0;
		waypointStableCount = 0;
		thrusterController.applyLinearEffort(new Vector3f(0, 0, 0));
		thrusterController.applyRotationalEffort(new Vector3f(0, 0, 0));
	}

	public boolean isControllingDepth() {
		return isControllingDepth;
	}

	public void setControllingDepth(boolean isControlling) {
		isControllingDepth = isControlling;
	}

	public boolean isControllingPitch() {
		return isControllingPitch;
	}

	public void setControllingPitch(boolean isControlling) {
		isControllingPitch = isControlling;
	}

	public boolean isControllingHeading() {
		return isControllingHeading;
	}

	public void setControllingHeading(boolean isControlling) {
		isControllingHeading = isControlling;
	}

	public boolean isControllingWaypoint() {
		return isControllingWaypoint;
	}

	public void setControllingWaypoint(boolean isControlling) {
		isControllingWaypoint = isControlling;
	}

	public void setTargetX(double x) {
		targetPosition.setX(x);
		waypoint.setX(x);
		// waypoint.setBoundingBoxX(-1);
		waypointStableCount = 0;
		updateLocalWaypoint();
	}

	public void setBoundingBoxX(double x) {
		if (x != -1 && x < MIN_VALUE_BOUNDING_BOX_X) {
			log.warn("The bounding box value entered(" + Util.formatDouble(x, 2) + " meter)" + "is too small. "
					+ MIN_VALUE_BOUNDING_BOX_X + "meter is the" + "minimum value for X axis and will be used instead.");
			waypoint.setBoundingBoxX(MIN_VALUE_BOUNDING_BOX_X);
		} else {
			waypoint.setBoundingBoxX(x);
		}
	}

	public double getTargetX() {
		return targetPosition.getX();
	}

	public void setTargetY(double y) {
		targetPosition.setY(y);
		waypoint.setY(y);
		// waypoint.setBoundingBoxY(-1);
		waypointStableCount = 0;
		updateLocalWaypoint();
	}

	public void setBoundingBoxY(double y) {
		if (y != -1 && y < MIN_VALUE_BOUNDING_BOX_Y) {
			log.warn("The bounding box value entered(" + Util.formatDouble(y, 2) + " meter)" + "is too small. "
					+ MIN_VALUE_BOUNDING_BOX_Y + "meter is the" + "minimum value for Y axis and will be used instead.");
			waypoint.setBoundingBoxY(MIN_VALUE_BOUNDING_BOX_Y);
		} else {
			waypoint.setBoundingBoxY(y);
		}
	}

	public double getTargetY() {
		return targetPosition.getY();
	}

	public void setTargetZ(double z) {
		diveStableCount = 0;
		waypoint.setZ(z);
		// waypoint.setBoundingBoxZ(-1);
		targetPosition.setZ(z);
		updateLocalWaypoint();
	}

	public void setBoundingBoxZ(double z) {
		if (z != -1 && z < MIN_VALUE_BOUNDING_BOX_Z) {
			log.warn("The bounding box value entered(" + Util.formatDouble(z, 2) + " meter)" + "is too small. "
					+ MIN_VALUE_BOUNDING_BOX_Z + "meter is the" + "minimum value for Z axis and will be used instead.");
			waypoint.setBoundingBoxZ(MIN_VALUE_BOUNDING_BOX_Z);
		} else {
			waypoint.setBoundingBoxZ(z);
		}
	}

	public double getTargetZ() {
		return targetPosition.getZ();
	}

	public void setTargetRoll(double roll) {
		targetDirection.setX(roll);
		waypoint.setRoll(roll);
		updateLocalWaypoint();
	}

	public double getTargetRoll() {
		return targetDirection.getX();
	}

	public void setTargetPitch(double pitch) {
		targetDirection.setY(pitch);
		waypoint.setPitch(pitch);
		updateLocalWaypoint();
	}

	public double getTargetPitch() {
		return targetDirection.getY();
	}

	public void setTargetYaw(double yaw) {
		yaw %= 360.0;
		targetDirection.setZ(yaw);
		waypoint.setYaw(yaw);
		// waypoint.setBoundingBoxHeading(-1);
		updateLocalWaypoint();
	}

	public void setBoundingBoxHeading(double heading) {
		waypoint.setBoundingBoxHeading(heading);
	}

	public double getTargetYaw() {
		return targetDirection.getZ();
	}

	public boolean diveTargetReached() {
		return diveStableCount >= DIVE_STABLE_COUNT;
	}

	public boolean headingTargetReached() {
		return headingStableCount >= HEADING_STABLE_COUNT;
	}

	public boolean waypointTargetReached() {
		return waypointStableCount >= WAYPOINT_STABLE_COUNT;
	}

	public boolean reachedTarget() {
		boolean waypointStable = waypointTargetReached();
		boolean diveStable = diveTargetReached();
		boolean headingStable = headingTargetReached();

		return waypointStable && diveStable && headingStable;
	}

	public void setPIDValues(PIDValues pitch, PIDValues propulsion, PIDValues lateral, PIDValues depth, PIDValues yaw) {
		pitchPID.setValues(pitch);
		propulsionPID.setValues(propulsion);
		lateralPID.setValues(lateral);
		depthPID.setValues(depth);
		yawPID.setValues(yaw);

		// updatePid();//do not uncomment this line its cause bug in PID widget
	}

	public PIDValues getPitchPIDValues() {
		return pitchPID.getValues();
	}

	public PIDValues getPropulsionPIDValues() {
		return propulsionPID.getValues();
	}

	public PIDValues getLateralPIDValues() {
		return lateralPID.getValues();
	}

	public PIDValues getDepthPIDValues() {
		return depthPID.getValues();
	}

	public PIDValues getYawPIDValues() {
		return yawPID.getValues();
	}

	public void setBoundingBoxValues(BoundingBoxValues values) {
		boundingBoxX.setValue(values.getX());
		boundingBoxY.setValue(values.getY());
		boundingBoxZ.setValue(values.getZ());

		boundingBoxHeading.setValue(values.getHeading());
		updateLocalWaypointBoundingBox();
	}

	public void resetBoundingBoxValues() {
		// boundingBoxX.setValue(boundingBoxX.getValue());
		// boundingBoxY.setValue(boundingBoxY.getValue());
		// boundingBoxZ.setValue(boundingBoxZ.getValue());
		//
		// boundingBoxHeading.setValue(boundingBoxHeading.getValue());
		boundingBoxX = new ConfigValue<Double>("auv.positionController.boundingBox.x", Double.class);
		boundingBoxY = new ConfigValue<Double>("auv.positionController.boundingBox.y", Double.class);
		boundingBoxZ = new ConfigValue<Double>("auv.positionController.boundingBox.z", Double.class);

		boundingBoxHeading = new ConfigValue<Double>("auv.positionController.boundingBox.heading", Double.class);
		updateLocalWaypointBoundingBox();
	}

	public BoundingBoxValues getBoundingBoxValues() {
		return new BoundingBoxValues(boundingBoxX.getValue(), boundingBoxY.getValue(), boundingBoxZ.getValue(),
				boundingBoxHeading.getValue());
	}

	public LocationProvider getLocationProvider() {
		return locationProvider;
	}

	public DirectionProvider getDirectionProvider() {
		return directionProvider;
	}

	public void standPosition() {
		// We keep same depth target, pitch target and roll target.
		targetPosition.setXYZ(locationProvider.getX(), locationProvider.getY(), targetPosition.getZ());
		targetDirection.setXYZ(targetDirection.getX(), targetDirection.getY(), directionProvider.getYaw());
	}

	public void setLocalWaypointDriverService(LocalWaypointDriverService localWaypointDriverService) {
		this.localWaypointDriverService = localWaypointDriverService;
	}

	private void updateLocalWaypoint() {
		if (localWaypointDriverService != null) {
			localWaypointDriverService.updateEveryChange(LocalWaypointRec.class);
		}
	}

	private void updateLocalWaypointBoundingBox() {
		if (localWaypointDriverService != null) {
			localWaypointDriverService.updateEveryChange(LocalWaypointBoundingBoxRec.class);
		}
	}

	public void setPidDriverService(PidDriverService pidDriverService) {
		this.pidDriverService = pidDriverService;
	}

	@SuppressWarnings("unused")
	private void updatePid() {
		if (pidDriverService != null) {
			pidDriverService.updateEveryChange(PidRec.class);
		}
	}

	public Point2D getOverwiteWrenchPourcent() {
		return overwiteWrenchPourcent;
	}

	public void setOverwiteWrenchPourcent(Point2D overwiteWrenchPourcent) {
		this.overwiteWrenchPourcent = overwiteWrenchPourcent;
	}
	public double getConstantDepthEffort() {
		return constantDepthEffort;
	}

	public void setConstantDepthEffort(double constantDepthEffort) {
		this.constantDepthEffort = constantDepthEffort;
	}
}
