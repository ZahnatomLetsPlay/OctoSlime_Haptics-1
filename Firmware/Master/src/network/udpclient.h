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
#ifndef SLIMEVR_UDP_CLIENT_H_
#define SLIMEVR_UDP_CLIENT_H_

#include <WiFiUdp.h>
#include <Arduino.h>
#include "quat.h"
#include "configuration.h"
#include "sensors/sensor.h"
#include "wifihandler.h"
#include "globals.h"

namespace ServerConnection
{
    void Slimeconnect();
    void Hapticsconnect();
    void update(Sensor *Sensors[]);
    void Haptics_update();
    void resetConnection();
    bool isConnected();
    int DataReady();
    bool IsHapticServerConnected();
    bool IsSlimeServerConnected();

}

#endif // SLIMEVR_UDP_CLIENT_H_