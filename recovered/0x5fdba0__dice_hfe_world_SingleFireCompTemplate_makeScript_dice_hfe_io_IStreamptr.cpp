// FUNCTION: BF2 0x5fdba0
// BF2_FLAGS: -fno-strict-aliasing
#include <ostream>
#include <sstream>
#include <string>
#include <vector>

namespace dice { namespace hfe { namespace io {

class IStream {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual unsigned int write(const char* data, unsigned int size);
};

} } }

namespace dice { namespace hfe { namespace world {

enum WeaponAction {};
enum WeaponTrigger {};

struct WeaponTimeEvent {
    WeaponAction action;
    WeaponTrigger trigger;
    float value;
    int _pad;
};

class FireCompTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);
};

class SingleFireCompTemplate : public FireCompTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);
    float getDropWeaponAfterFiringDelay();
    float getHideWeaponAfterFiringDelay();
    float getShowWeaponAfterReloadDelay();
    float getHideWeaponAfterReloadDelay();
    float getDropWeaponAfterReloadDelay();
    char _pad0[0x90];
    std::vector<WeaponTimeEvent> m_timeEvents;
    bool m_busyUntilButtonRelease;
    bool m_onlyFireWhenProne;
    char _pad1[2];
    int m_hideLod;
    int m_dropLod;
};

bool SingleFireCompTemplate::makeScript(dice::hfe::io::IStream* stream)
{
    if (!FireCompTemplate::makeScript(stream))
        return false;
    std::ostringstream ss(std::ios_base::out);
    if (m_timeEvents.size() > 0) {
        float a = getDropWeaponAfterFiringDelay();
        if (a != -1.0f)
            ss << "ObjectTemplate.fire.dropWeaponAfterFiringDelay " << (double)a << std::endl;
        float b = getHideWeaponAfterFiringDelay();
        if (b != -1.0f)
            ss << "ObjectTemplate.fire.hideWeaponAfterFiringDelay " << (double)b << std::endl;
        float c = getShowWeaponAfterReloadDelay();
        if (c != -1.0f)
            ss << "ObjectTemplate.fire.showWeaponAfterReloadDelay " << (double)c << std::endl;
        float d = getHideWeaponAfterReloadDelay();
        if (d != -1.0f)
            ss << "ObjectTemplate.fire.hideWeaponAfterReloadDelay " << (double)d << std::endl;
        float e = getDropWeaponAfterReloadDelay();
        if (e != -1.0f)
            ss << "ObjectTemplate.fire.dropWeaponAfterReloadDelay " << (double)e << std::endl;
    }
    if (m_dropLod > 0)
        ss << "ObjectTemplate.fire.dropLod " << m_dropLod << std::endl;
    if (m_hideLod > 0)
        ss << "ObjectTemplate.fire.hideLod " << m_hideLod << std::endl;
    if (m_busyUntilButtonRelease)
        ss << "ObjectTemplate.fire.busyUntilButtonRelease 1" << std::endl;
    if (m_onlyFireWhenProne)
        ss << "ObjectTemplate.fire.onlyFireWhenProne 1" << std::endl;
    std::string str(ss.str());
    unsigned int n = stream->write(str.data(), (unsigned int)str.size());
    return n == str.size();
}

} } }
