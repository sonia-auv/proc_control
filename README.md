# proc_control

![Docker Image CI - Master Branch](https://github.com/sonia-auv/proc_control/workflows/Docker%20Image%20CI%20-%20Master%20Branch/badge.svg)
![Docker Image CI - Develop Branch](https://github.com/sonia-auv/proc_control/workflows/Docker%20Image%20CI%20-%20Develop%20Branch/badge.svg?branch=develop)
![GitHub release (latest by date)](https://img.shields.io/github/v/release/sonia-auv/proc_control)
![Average time to resolve an issue](https://isitmaintained.com/badge/resolution/sonia-auv/proc_control.svg)


Generated code from MATLAB's embeded coder. See .. for source code.

Configuration files for both AUVs are located in config/

## Getting Started

Clone current project by using following command :
```bash
    git clone git@github.com:sonia-auv/proc_control.git
```

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes. See deployment for notes on how to deploy the project on a live system.

### Prerequisites

First and foremost to run the module you will need to have [docker](https://www.docker.com/get-started?utm_source=google&utm_medium=cpc&utm_campaign=getstarted&utm_content=sitelink&utm_term=getstarted&utm_budget=growth&gclid=CjwKCAjw57b3BRBlEiwA1Imytuv9VRFX5Z0INBaD3JJNSUmadgQh7ZYWTw_r-yFn2S4XjZTsLbNnnBoCPsIQAvD_BwE) installed.

To validate your installation of docker, simply type in

```
docker -v
```

If you receive an output in the likes of :
```
Docker version 19.03.5, build 633a0ea
```

It means you have it installed. If not follow instructions on how to install it for your OS.

### Installing

To install the proc_control with the generated .tgz file, you need to put all files with the extension *.cpp, *.c and *.h in the source folder and the CmakeLists and package.xml in the project folder.

In the CMakeLists file add the following line :
```
set(PROJECT_SRC_FILES "src/proc_control")
```
Then modify the list for the source files with this :
```
file(GLOB ${PROJECT_NAME}_C_SOURCES RELATIVE ${PROJECT_SOURCE_DIR} ${PROJECT_SRC_FILES}/*.c)
file(GLOB ${PROJECT_NAME}_CPP_SOURCES RELATIVE ${PROJECT_SOURCE_DIR} ${PROJECT_SRC_FILES}/*.cpp)
```
Finaly, remove all the files from the command add_executables except these :
```
add_executable(${PROJECT_NAME}_node
   ${PROJECT_SRC_FILES}/<LAUNCH_FILES_NAME>.cpp
   ${${PROJECT_NAME}_C_SOURCES}
   ${${PROJECT_NAME}_CPP_SOURCES}
)
```

## Running the tests

Explain how to run the automated tests for this system

### Break down into end to end tests

Explain what these tests test and why

```
Give an example
```

### And coding style tests

Explain what these tests test and why

```
Give an example
```

## Deployment

Add additional notes about how to deploy this on a live system

## Built With

Add additional project dependencies

* [ROS](http://wiki.ros.org/) - ROS robotic framework


## Versioning

We use [SemVer](http://semver.org/) for versioning. For the versions available, see the [tags on this repository](https://github.com/your/project/tags).

## License

This project is licensed under the GNU License - see the [LICENSE](LICENSE) file for details
