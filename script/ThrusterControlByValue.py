#!/usr/bin/env python

import rospy
import time
import subprocess
import shlex
import signal
import os

from provider_thruster.msg import ThrusterEffort
from proc_control.srv import EnableControl, EnableThrusters
from Tkinter import Tk
import tkFileDialog as filedialog

class ThrusterController:
    def __init__(self, default_value=0, thruster_count = 8):
        self.default_value = default_value
        self.thruster_count = thruster_count
        self.thruster_control = []

        # Service
        try:
            rospy.wait_for_service('/proc_control/enable_thrusters',timeout=2)
            rospy.wait_for_service('/proc_control/enable_control',timeout=2)
        except rospy.ROSException:
            pass
        self.publisher = rospy.Publisher("/provider_thruster/thruster_effort", ThrusterEffort, queue_size=10)
        #self.publisher = rospy.Publisher("/provider_thruster/effort", ThrusterEffort, queue_size=10)
        #self.enable_control_service = rospy.ServiceProxy('/proc_control/enable_control', EnableControl)
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
        signal.signal(signal.SIGTSTP, self.onCloseHandler)

    def start(self):
        timer = 10

        try:
            #self._enable_axis(X=1, Y=1, Z=1, PITCH=1, ROLL=1, YAW=1)
            self.enable_thrusters_service(isEnable=False)
        except rospy.ServiceException as err:
            rospy.logerr(err)

        while not rospy.is_shutdown():

            ans = str(raw_input("\nDo you want to use a file ? [y/n] : "))

            if ans == "y":
                self.file_enter()
            else:
                self.manual_enter()
                    
            try:
                timer = float(raw_input("Enter time of affectation: "))
            except:
                print "The value must be a number. Default value (10s) used"
                timer = 10

            self.launchBag(timer)
            
            # Set values to wanted
            self.set_efforts()
            print "Wait {} seconds...".format(timer)
            time.sleep(timer)
            # Set values back to 0
            self.set_zeros()

            rospy.loginfo("Done")

    def set_efforts(self):
        print "Efforts: \n"
        for i in range(self.thruster_count):
            print "\tThruster -> {0} | Effort -> {1}".format(i+1, self.thruster_control[i]) 
            self.publisher.publish(ID=self.ids[i], effort=self.thruster_control[i])
    
    def set_zeros(self):
        for i in range(self.thruster_count):
            self.publisher.publish(ID=self.ids[i], effort=0)

    def manual_enter(self):
        print "\n\nEnter thruster id and effort for each thruster."
        # Request values
        for i in range(self.thruster_count):
            thruster_effort = -1
            entry_ok = False
            while not entry_ok:
                try:
                    thruster_effort = int(raw_input('\tEffort for thruster {} (-30 to 30, 99 to exit): '.format(i+1)))
                except:
                    print "Not a number"
                    entry_ok = False
                    continue
                if -30 <= thruster_effort <= 30:
                    entry_ok = True
                else:
                    if thruster_effort == 99:
                        exit()
                    print "Value is not in the range !"
                    entry_ok = False
            self.thruster_control[i] = thruster_effort

    def file_enter(self):
        try:
            root = Tk()
            root.filename = filedialog.askopenfilename(initialdir = "~/Workspaces/ros_sonia_ws/src/proc_control/config/OpenLoopMotors",title = "Select file",filetypes = (("text files","*.txt"),("all files",".*")))
            f = open(root.filename,"r")
            lines = f.readlines()
        except:
            print("Error while openning file")
            exit()
        i = 0
        for line in lines:
            if -30 <= int(line) <= 30:
                self.thruster_control[i] = int(line)
                i+=1
            else:
                print("Error in file")
                exit()

    def launchBag(self, timer):
        nameFile = str(raw_input('Bag name : '))

        raw_input("Press any key to start...")

        os.chdir(os.path.expanduser('~/Workspaces/ros_sonia_ws/src/proc_control/script'))

        command = "./Record_open_loop.sh " + nameFile + " " + str(timer)
        command = shlex.split(command)
        subprocess.Popen(command)

    def onCloseHandler(self, signum, frame):
        self.set_zeros()
        self.enable_thrusters_service(isEnable=True)
        #self._enable_axis(X=0, Y=0, Z=0, PITCH=0, ROLL=0, YAW=0)
        exit()

    #def _enable_axis(self, X, Y, Z, PITCH, ROLL, YAW):
    #    try:
    #        self.enable_control_service(X=X, Y=Y, Z=Z, PITCH=PITCH, ROLL=ROLL, YAW=YAW)
    #    except rospy.ServiceException as err:
    #        rospy.logerr(err)


if __name__ == "__main__":
    rospy.init_node("ThrusterControl", anonymous=True)
    controller = ThrusterController()
controller.start()