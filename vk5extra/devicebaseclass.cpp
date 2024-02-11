#include "devicebaseclass.h"
#include <iostream>

using namespace std;


DeviceBaseClass::DeviceBaseClass()
{

}

short DeviceBaseClass::getDeviceID() const
{
    return deviceID;
}

void DeviceBaseClass::setDeviceID()
{
    cin >> deviceID;
}
