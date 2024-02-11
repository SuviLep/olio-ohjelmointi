#include "devicedisplay.h"
#include <iostream>

using namespace std;

DeviceDisplay::DeviceDisplay()
{
    cout << "Display created" << endl;
}

short DeviceDisplay::getDisplayResolution() const
{
    return displayResolution;
}

void DeviceDisplay::setDisplayResolution()
{
    cin >> displayResolution;
    if (displayResolution < 1 || displayResolution > 10){
        cout << "Invalid number. Select between 1-10" << endl;
        setDisplayResolution();
    }
}
