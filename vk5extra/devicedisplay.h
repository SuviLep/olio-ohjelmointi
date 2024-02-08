#ifndef DEVICEDISPLAY_H
#define DEVICEDISPLAY_H

#include "devicebaseclass.h"

class DeviseDisplay: public DeviceBaseClass
{
public:
    DeviseDisplay();
    void setDisplayResolution();
    short getDisplaRresolution() const;

private:
    short displayResolution =0;
};

#endif // DEVICEDISPLAY_H
