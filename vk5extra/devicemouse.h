#ifndef DEVICEMOUSE_H
#define DEVICEMOUSE_H

#include "devicebaseclass.h"

class DeviceMouse: public DeviceBaseClass
{
public:
    DeviceMouse();
    void setPrimaryButton();
    short getPrimaryButton() const;

private:
    short primaryButton= 0;
};

#endif // DEVICEMOUSE_H
