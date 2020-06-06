# Proc Control

This node is part of S.O.N.I.A's AUV7 software. Is use to computed the AUV wrench to do trajectory tracking and visual servoing.

## Getting Started

```bash
$ git clone https://github.com/sonia-auv/proc_control
```

### Prerequisites

You must install S.O.N.I.A's ROS repositories to use this module.

S.O.N.I.A's installation instruction are available at [SONIA's Installation](https://sonia-auv.readthedocs.io/user/installation/)

### Development

##### Input 

Input information is provide to the node using this ROS msgs :

* Pose and Twist information [nav_msgs Odometry](http://docs.ros.org/melodic/api/nav_msgs/html/msg/Odometry.html)

##### Output

Output information is provide to other node using this ROS msg :

* Wrench information [geometry_msgs Wrench](http://docs.ros.org/lunar/api/geometry_msgs/html/msg/WrenchStamped.html)

##### Algorithms

A [PID](https://en.wikipedia.org/wiki/PID_controller) control loop is applied on each axis (X Y Z YAW). No control's law are applied on ROLL and PITCH axis.

## Running the tests

No tests implemented yet. You can run a [simulation](https://github.com/sonia-auv/proc_control/blob/develop/script/AuvSimulation.py) to test new control algorithms. It's highly recommended to test the node on a real system.

## Built With

* [ROS](http://www.ros.org/) - ROS Robotic Operating System
* [Eigen](http://eigen.tuxfamily.org/index.php?title=Main_Page) - Linear algebra

## Contributing

Please read [CONTRIBUTING.md](https://gist.github.com/PurpleBooth/b24679402957c63ec426) for details on our code of conduct, and the process for submitting pull requests to us.

## Authors

* **Jérémie St-Jules Prévôt** - *Initial work* - [jsprevost](https://github.com/jsprevost)
* **Francis Massé** - *Initial work* - [fmassey](https://github.com/fmassey)

## License

This project is licensed under the GNU GPL V3 License - see the [LICENSE.md](LICENSE.md) file for details

## Acknowledgments
