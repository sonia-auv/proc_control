import rospy

from interface_rs485.msg import SendRS485Msg


class Percentage2Thrust:

    def __init__(self):
        self.THRUSTs = []
        self.thrust_percentage_sub = rospy.Subscriber('/interface_rs485/dataRx', SendRS485Msg, self._thrust_percentage_callback)

    def _thrust_percentage_callback(self, msg):
        if msg.slave == SendRS485Msg.SLAVE_ISI_PWM:
            percentage = msg.data
            self.percentage_2_pwm(percentage)

    def percentage_2_pwm(self, percentage):
        PWMs = []
        for percent in percentage:
            if percent > 0 and percent < 100:
                pwm = 3.7 * percent + 1100
            elif percent <= 200 and percent > 100 :
                pwm = 3.7 * percent + 1160
            elif percent == 100:
                pwm = 1500

            PWMs.append(pwm)

    def pwm_2_thrust(self, PWMs):
        for pwm in PWMs:
            if 1100 <= pwm and pwm < 1180:
                thrust = 0.0258 * pwm - 37.5007

            elif 1180 <= pwm and pwm < 1350:
                thrust = 0.0285 * pwm - 40.5859

            elif 1350 <= pwm and pwm < 1470:
                thrust = 0.0182 * pwm - 26.6501

            elif 1530 <= pwm and pwm < 1625:
                thrust = 0.0197 * pwm - 30.1860

            elif 1625 <= pwm and pwm < 1850:
                thrust = 0.0326 * pwm - 51.0527

            elif 1850 <= pwm and pwm < 1900:
                thrust = 0.0389 * pwm - 62.6640

            else:
                thrust = 0

            self.THRUSTs.append(thrust)







