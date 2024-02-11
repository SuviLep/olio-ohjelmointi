#include "mydeviceui.h"
#include "devicebaseclass.h"
#include <iostream>

using namespace std;

Mydeviceui::Mydeviceui()
{
    cout<<"device created"<< endl;
    objectDeviceDisplay = new DeviceDisplay;
    objectDeviceMouse = new DeviceMouse;
    objectDeviceTouchPad = new DeviceTouchPad;
}

Mydeviceui::~Mydeviceui()
{
    cout<<"Device deleted"<< endl;
    delete objectDeviceMouse;
    objectDeviceMouse= nullptr;

    delete objectDeviceTouchPad;
    objectDeviceTouchPad=nullptr;

    delete objectDeviceDisplay;
    objectDeviceDisplay=nullptr;
}

void Mydeviceui:: uiShowMenu()
{
    cout<< "1: Set Mouse Infromation" << endl;
    cout << "2: Set Touch Pad Infromation"<< endl;
    cout <<"3: Set Display Information"<< endl;
    cout <<"4: Show Device Information" << endl;
    cout <<"5: Finish"<< endl;
    cout <<"Choose"<< endl;

    int choice = 0;
    cin >> choice;

    switch (choice) {
    case 1:
        uiSetMouseInformation();
        break;
    case 2:
        uiSetTouchPadInformation();
        break;
    case 3:
        uiSetDisplayInformation();
        break;
    case 4:
        uiShowDeviceInformation();
        break;
    case 5:
        // Do nothing for case 5
        break;
    default:
        uiShowMenu();
        break;
    }
}
void Mydeviceui::uiSetMouseInformation()
{
    cout <<"Set Mouse information" <<endl;
    cout <<"*********************" <<endl;

    cout <<"Set Mouse Device ID:" <<endl;
    objectDeviceMouse->setDeviceID();

    cout <<"Set Mouse Primary Button:" <<endl;
    objectDeviceMouse->setPrimaryButton();

    uiShowMenu();
}
void Mydeviceui::uiSetTouchPadInformation()
{
    cout <<"Set Touch Pad Information" <<endl;
    cout <<"**************************" <<endl;

    cout <<"Set Touch Pad ID:" <<endl;
    objectDeviceTouchPad->setDeviceID();

    cout<<"Set Touch Pad Sensitivity (1-5):"<< endl;
    objectDeviceTouchPad->setTouchPadSensitivity();

    uiShowMenu();
}
void Mydeviceui::uiSetDisplayInformation()
{
    cout <<"Set Display Information" <<endl;
    cout <<"**************************" <<endl;

    cout <<"Set Display ID:" <<endl;
    objectDeviceDisplay->setDeviceID();

    cout<<"Set Display Resolution (1-10):"<< endl;
    objectDeviceDisplay->setDisplayResolution();

    uiShowMenu();
}
void Mydeviceui::uiShowDeviceInformation()
{
    cout << "Device Information" << endl;
    cout << "******************" << endl;

    cout << "Mouse Information" << endl;
    cout << "Mouse ID: " << objectDeviceMouse->getDeviceID() << endl;
    cout << "Mouse Primary Button: " << objectDeviceMouse->getPrimaryButton() << endl;


    cout << "Touch Pad Information" << endl;
    cout << "Touch Pad ID: " << objectDeviceTouchPad->getDeviceID() << endl;
    cout << "Touch Pad Sensitivity: " << objectDeviceTouchPad->getTouchPadSensitivity() << endl;

    cout << "Display Information" << endl;
    cout << "Display ID: " << objectDeviceDisplay->getDeviceID() << endl;
    cout << "Display Resolution: " << objectDeviceDisplay->getDisplayResolution() << endl;

    uiShowMenu();
}
