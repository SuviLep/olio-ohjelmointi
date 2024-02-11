#include "devicemouse.h"
#include "devicebaseclass.h"
#include <iostream>

using namespace std;

// Hiiri: Primary Button = 1 tarkoittaa, että vasen painike asetetaan ensisijaiseksi painikkeeksi.
// Hiiri: Primary Button = 2 tarkoittaa, että oikea painike asetetaan ensisijaiseksi painikkeeksi.

DeviceMouse::DeviceMouse()
{
    cout << "Mouse created" << endl;
}

short DeviceMouse::getPrimaryButton() const
{
    return primaryButton;
}

void DeviceMouse::setPrimaryButton()
{

    cin >> primaryButton;
    if (primaryButton > 2 || primaryButton < 1){
        cout << "Non valid number. Select between 1 and 2 please" << endl;
        setPrimaryButton();
    }
}

