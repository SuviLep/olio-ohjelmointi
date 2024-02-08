#ifndef MYDEVICEUI_H
#define MYDEVICEUI_H

#include "devicedisplay.h"
#include "devicemouse.h"
#include "devicetouchpad.h"

class Mydeviceui
{
public:
    Mydeviceui();
    ~Mydeviceui();

    void uiShowMenu();
    void uiSetMouseInformation();
    void uiSetTouchPadInformation();
    void uiSetDisplayInformation();
    void uiShowDeviceInformation();

private:
    DeviseMouse* objectDeviceMouse;
    DeviceTouchPad* objectDeviceTouchPad;
    DeviseDisplay* objectDeviceDisplay;
};

#endif // MYDEVICEUI_H
