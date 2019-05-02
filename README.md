# sample_nodelet

Simple example of ROS nodelet.

Originally obtained from: <https://github.com/cryborg21/sample_nodelet>

Changes I made (marcelinomalmeidan): 

- Changed names around to avoid confusion between package name, library name, and nodelet name.

- Incremented example on how to load files from launch file by using a nodehandle.

## Description

* **sample_nodelet_class.launch** will run following nodes:
  * **/sample_nodelet_manager** : nodelet manager
  * **/sample_nodelet_loader** : loader of sample_nodelet_class


* **sample_nodelet_class2.launch** will run following nodes:
  * **/sample_nodelet_manager** : nodelet manager
  * **/sample_nodelet2_loader** : loader of sample_nodelet_class2


* **sample_nodelet_all.launch** will run following nodes:
  * **/sample_nodelet_manager** : nodelet manager
  * **/sample_nodelet_loader** : loader of sample_nodelet_class
  * **/sample_nodelet2_loader** : loader of sample_nodelet_class2

## Requirements

* ROS Kinetic Kame / Jade Turtle / ROS Indigo Igloo

## Usage without .launch files

1. Run nodelet manager
  * `rosrun nodelet nodelet manager __name:=<MANAGER_NAME>`
  * ex.: `rosrun nodelet nodelet manager __name:=sample_nodelet_manager`
2. Load nodelet class to nodelet manager
  * `rosrun nodelet nodelet load <PKG_NAME>/<NODELETCLASS_NAME> <MANAGER_NAME>`
  * ex.: `rosrun nodelet nodelet load sample_nodelet/SampleNodeletClass sample_nodelet_manager`

## Author

[@cryborg21](https://github.com/cryborg21)  
Copyright (c) 2016 @cryborg21
