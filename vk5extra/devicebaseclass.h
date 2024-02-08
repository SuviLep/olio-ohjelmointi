#ifndef DEVICEBASECLASS_H
#define DEVICEBASECLASS_H

class DeviceBaseClass
{
public:
    DeviceBaseClass();
    void setDeviceID();
    short getDeviceID() const;

protected:
    short deviceID=0;

};

#endif // DEVICEBASECLASS_H
