// FUNCTION: BF2 0x7eb810
namespace dice { namespace hfe { namespace io {

struct TriggerMapping {
    int m_deviceId;   // +0x0
    int m_kind;       // +0x4
};

class IAdvancedInputDevice;

class IInputDevice {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void* queryInterface(unsigned int iid);
};

class IInputDeviceManager {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual IInputDevice* getDevice(unsigned int id);
};

extern IInputDeviceManager* inputDeviceManager;
extern unsigned int IID_IAdvancedInputDevice;

class ControlMap {
public:
    bool axisToTrigger(IAdvancedInputDevice* d, TriggerMapping& tm, float f);
    bool buttonsToTrigger(IInputDevice* d, TriggerMapping& tm, float f);
    bool resolveTriggerMapping(TriggerMapping& tm, float f);
};

bool ControlMap::resolveTriggerMapping(TriggerMapping& tm, float f) {
    IInputDevice* dev = inputDeviceManager->getDevice(tm.m_deviceId);
    if (dev != 0) {
        switch (tm.m_kind) {
        case 1: {
            IAdvancedInputDevice* adv = (IAdvancedInputDevice*)dev->queryInterface(IID_IAdvancedInputDevice);
            return axisToTrigger(adv, tm, f);
        }
        case 2:
        case 3:
            return buttonsToTrigger(dev, tm, f);
        }
    }
    return 0;
}

}}}
