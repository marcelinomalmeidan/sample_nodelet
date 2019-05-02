/*
 * sample_nodelet_class.cpp
 *
 *  Created on: 2016/09/18
 *      Author: cryborg21
 */
#include "sample_nodelet_class.h"
#include <pluginlib/class_list_macros.h>

namespace sample_nodelet_ns {

SampleNodeletClass::SampleNodeletClass() {
  ROS_INFO("SampleNodeletClass Constructor");
}

SampleNodeletClass::~SampleNodeletClass() {
  ROS_INFO("SampleNodeletClass Destructor");
}

void SampleNodeletClass::onInit() {
    NODELET_INFO("SampleNodeletClass - %s", __FUNCTION__);
    nh_ = getPrivateNodeHandle();

    float example_param;
    nh_.getParam("example_param", example_param);

    NODELET_INFO("example_param value: %f", example_param);
}

} // namespace sample_nodelet_ns

PLUGINLIB_EXPORT_CLASS(sample_nodelet_ns::SampleNodeletClass, nodelet::Nodelet)
