#!/usr/bin/env python

import rospy
import time

from provider_thruster.msg import ThrusterEffort
from proc_control.srv import EnableThrusters

class ThrusterController:
    def __init__(self, default_value=0, thruster_count = 8):
        self.default_value = default_value
        self.thruster_count = thruster_count
        self.thruster_control = []

        # Service
        try:
            rospy.wait_for_service('/proc_control/enable_thrusters',timeout=2)
        except rospy.ROSException:
            pass
        self.publisher = rospy.Publisher("/provider_thruster/thruster_effort", ThrusterEffort, queue_size=10)
        self.enable_thrusters_service = rospy.ServiceProxy('/proc_control/enable_thrusters', EnableThrusters)

        for i in range(self.thruster_count):
            self.thruster_control.append(self.default_value)
        
        self.ids = [ThrusterEffort.UNIQUE_ID_T1, 
                    ThrusterEffort.UNIQUE_ID_T2,
                    ThrusterEffort.UNIQUE_ID_T3,
                    ThrusterEffort.UNIQUE_ID_T4,
                    ThrusterEffort.UNIQUE_ID_T5,
                    ThrusterEffort.UNIQUE_ID_T6,
                    ThrusterEffort.UNIQUE_ID_T7,
                    ThrusterEffort.UNIQUE_ID_T8]

    def start(self):
        timer = 1

        try:
            self.enable_thrusters_service(isEnable=False)
        except rospy.ServiceException as err:
            rospy.logerr(err)

        while not rospy.is_shutdown():
            rospy.loginfo("Publish")
            print "\n\nEnter thruster id and effort for each thruster."
            # Request values
            for i in range(self.thruster_count):
                thruster_effort = -1
                entry_ok = False
                while not entry_ok:
                    try:
                        thruster_effort = int(raw_input('\tEffort for thruster {} (0 to 100): '.format(i+1)))
                    except:
                        entry_ok = False
                        continue
                    if 0 <= thruster_effort <= 100:
                        entry_ok = True
                    else:
                        entry_ok = False
                self.thruster_control[i] = thruster_effort
            try:
                timer = float(raw_input("Enter time of affectation: "))
            except:
                print "The value must be a number. Default value used."
            
            raw_input("Press any key to affect these values...")

            # Set values to wanted
            self.set_efforts()
            print "Wait {} seconds...".format(timer)
            time.sleep(timer)
            # Set values back to 0
            self.set_zeros()

    def set_efforts(self):
        print "Efforts: \n"
        for i in range(self.thruster_count):
            print "\tThruster -> {0} | Effort -> {1}".format(i+1, self.thruster_control[i]) 
            self.publisher.publish(ID=self.ids[i], effort=self.thruster_control[i])
    
    def set_zeros(self):
        for i in range(self.thruster_count):
            self.publisher.publish(ID=self.ids[i], effort=0)


if __name__ == "__main__":
    rospy.init_node("ThrusterControl", anonymous=True)
    controller = ThrusterController()
    controller.start()