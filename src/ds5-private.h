// License: Apache 2.0. See LICENSE file in root directory.
// Copyright(c) 2015 Intel Corporation. All Rights Reserved.

#pragma once
#ifndef LIBREALSENSE_DS5_PRIVATE_H
#define LIBREALSENSE_DS5_PRIVATE_H

#include "uvc.h"
#include <mutex>

namespace rsimpl {
namespace ds5 {

    // Claim USB interface used for device
    void claim_ds5_monitor_interface(uvc::device & device);
    void claim_ds5_motion_module_interface(uvc::device & device);

    void get_gvd(uvc::device & device, std::timed_mutex & mutex, size_t sz, char * gvd);
    void get_firmware_version_string(uvc::device & device, std::timed_mutex & mutex, std::string & version);
    void get_module_serial_string(uvc::device & device, std::timed_mutex & mutex, std::string & serial, int offset);

} //namespace rsimpl::ds5
} // namespace rsimpl

#endif  // DS5_PRIVATE_H
