// FUNCTION: BF2 0x5eb940
// BF2_FLAGS: -fno-strict-aliasing
#include <sstream>
#include <string>
namespace dice { namespace hfe { namespace io {
class IStream {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual unsigned int write(const char* data, unsigned int size);
};
} } }

namespace dice { namespace hfe { namespace world {

class AmmoCompTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);
    unsigned char _pad0[0x10];
    int m_x10;
    float m_x14;
    unsigned char _pad1[0x4];
    float m_x1c;
    unsigned char _pad2[0x4];
    float m_x24;
    unsigned char _pad3[0x4];
    float m_x2c;
    bool m_x30;
    bool m_x31;
    unsigned char _pad4[0x2];
    float m_x34;
    unsigned char _pad5[0x4];
    int m_x3c;
    int m_x40;
    int m_x44;
    bool m_x48;
    bool m_x49;
    unsigned char _pad6[0x6];
    std::string m_x50;
};

bool AmmoCompTemplate::makeScript(dice::hfe::io::IStream* stream)
{
    std::ostringstream ss;
    if (m_x10 != 0) {
        ss << "ObjectTemplate.ammo.ammoType " << m_x10 << std::endl;
    }
    if (m_x3c != 5) {
        ss << "ObjectTemplate.ammo.nrOfMags " << m_x3c << std::endl;
    }
    if (m_x40 != 30) {
        ss << "ObjectTemplate.ammo.magSize " << m_x40 << std::endl;
    }
    if (m_x44 != 0) {
        ss << "ObjectTemplate.ammo.reloadAmount " << m_x44 << std::endl;
    }
    if (m_x2c != 0.699999988079071f) {
        ss << "ObjectTemplate.ammo.changeMagAt " << m_x2c << std::endl;
    }
    if (m_x14 != 2.0f) {
        ss << "ObjectTemplate.ammo.reloadTime " << m_x14 << std::endl;
    }
    if (m_x1c != 0.0f) {
        ss << "ObjectTemplate.ammo.firstShotExtraTime " << m_x1c << std::endl;
    }
    if (m_x24 != 0.0f) {
        ss << "ObjectTemplate.ammo.lastShotExtraTime " << m_x24 << std::endl;
    }
    if (m_x34 != 0.0f) {
        ss << "ObjectTemplate.ammo.minimumTimeUntilReload " << m_x34 << std::endl;
    }
    if (m_x30) {
        ss << "ObjectTemplate.ammo.autoReload " << m_x30 << std::endl;
    }
    if (m_x31) {
        ss << "ObjectTemplate.ammo.instantReloadOnEnable " << m_x31 << std::endl;
    }
    if (m_x50.length() != 0) {
        ss << "ObjectTemplate.ammo.magLinkWeapon " << m_x50 << std::endl;
    }
    if (m_x48) {
        ss << "ObjectTemplate.ammo.toggleWhenNoAmmo " << m_x48 << std::endl;
    }
    if (m_x49) {
        ss << "ObjectTemplate.ammo.reloadWithoutPlayer " << m_x49 << std::endl;
    }
    std::string s = ss.str();
    return stream->write(s.c_str(), s.length()) == s.length();
}

} } }

