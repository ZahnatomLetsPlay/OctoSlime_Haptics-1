/*
    SlimeVR Code is placed under the MIT license
    Copyright (c) 2021 Eiren Rain

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in
    all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
    THE SOFTWARE.
*/
#ifndef SLIMEVR_DEBUG_H_
#define SLIMEVR_DEBUG_H_
#include "consts.h"

#define IMU_MPU6050_RUNTIME_CALIBRATION // Comment to revert to startup/traditional-calibration
#define BNO_USE_ARVR_STABILIZATION // Comment to not use stabilization for BNO085+ IMUs

#define LOG_LEVEL LOG_LEVEL_DEBUG

//Debug information
//#define FULL_DEBUG
#define serialDebug false // Set to true to get Serial output for debugging
#define serialBaudRate 115200
#define UPDATE_IMU_UNCONNECTED 1
#define SEND_UPDATES_UNCONNECTED 1
#define STATUS_PRINT_INTERVAL 15000

// Determines how often we sample and send data
#define samplingRateInMillis 12

// Sleeping options
#define POWERSAVING_MODE POWER_SAVING_LEGACY 
#if POWERSAVING_MODE >= POWER_SAVING_MINIMUM
    #define TARGET_LOOPTIME_MICROS (samplingRateInMillis * 1000)
#endif

// Setup for the Magnetometer
#define useFullCalibrationMatrix true

// Battery configuration
#define batterySampleRate 10000
#define BATTERY_LOW_VOLTAGE_DEEP_SLEEP false
#define BATTERY_LOW_POWER_VOLTAGE 3.3 // Voltage to raise error

// Send updates over network only when changes are substantial
// If "false" updates are sent at the sensor update rate (usually 100 TPS)
// If "true" updates will be less frequent in the time of little motion
// Experimental
#define OPTIMIZE_UPDATES true

//#define OPTIMIZE_UPDATES false


#define I2C_SPEED 40000

#define FIRMWARE_BUILD_NUMBER 1
#define FIRMWARE_VERSION "1.1.0"

#endif // SLIMEVR_DEBUG_H_
