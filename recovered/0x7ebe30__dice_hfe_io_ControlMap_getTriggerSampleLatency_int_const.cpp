// FUNCTION: BF2 0x7ebe30
#include <map>
namespace dice { namespace hfe { namespace io {
struct TriggerAxis {
    int type;
    int pad;
    int index;
};
struct TriggerRemap {
    TriggerAxis primary;
    char pad[0x30 - 0xc];
    TriggerAxis secondary;
    char pad2[0x61 - 0x3c];
    bool usePrimary;
};
class IInputDevice {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual float getSampleLatency(int index);
};
class IInputDeviceManager {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual IInputDevice* getDevice(int type);
};
extern IInputDeviceManager* inputDeviceManager;
class ControlMap {
public:
    virtual ~ControlMap();
    float getTriggerSampleLatency(int id) const;
    char m_pad[0x50 - 8];
    std::map<int, TriggerRemap*> m_triggers;
};
float ControlMap::getTriggerSampleLatency(int id) const
{
    std::map<int, TriggerRemap*>::const_iterator it = m_triggers.find(id);
    if (it != m_triggers.end()) {
        const TriggerAxis* a = it->second->usePrimary ? &it->second->primary : &it->second->secondary;
        if (a->type == 1)
            return inputDeviceManager->getDevice(1)->getSampleLatency(a->index);
    }
    return 0.0f;
}
} } }
