#ifndef DEVICEMOUSE_H
#define DEVICEMOUSE_H

#include "devicebaseclass.h"

class DeviseMouse: public DeviceBaseClass
{
public:
    DeviseMouse();
    void setPrimaryButton();
    short getPrimaryButton();

private:
    short primaryButton;
};

#endif // DEVICEMOUSE_H
