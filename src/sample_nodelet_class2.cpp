/*
 * sample_nodelet_class2.cpp
 *
 *  Created on: 2016/09/18
 *      Author: cryborg21
 */
#include "sample_nodelet_class2.h"
#include <nodelet/nodelet.h>
#include <pluginlib/class_list_macros.h>

namespace sample_nodelet_ns {

SampleNodeletClass2::SampleNodeletClass2() {
  ROS_INFO("SampleNodeletClass2 Constructor");
}

SampleNodeletClass2::~SampleNodeletClass2() {
  ROS_INFO("SampleNodeletClass2 Destructor");
}

void SampleNodeletClass2::onInit() {
    NODELET_INFO("SampleNodeletClass2 - %s", __FUNCTION__);
    nh_ = getPrivateNodeHandle();

    float example_param;
    nh_.getParam("example_param2", example_param);

    NODELET_INFO("example_param value: %f", example_param);
}

} // namespace sample_nodelet_ns

PLUGINLIB_EXPORT_CLASS(sample_nodelet_ns::SampleNodeletClass2, nodelet::Nodelet)
