// FUNCTION: BF2 0x6095e0
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

namespace dice { namespace hfe { namespace io {
enum PlayerInputMap { PlayerInputMap_0 };
std::ostream& operator<<(std::ostream& os, PlayerInputMap v);
} } }

namespace dice { namespace hfe { namespace world {
enum TargetSystem { TargetSystem_0 };
std::ostream& operator<<(std::ostream& os, TargetSystem v);
} } }

namespace dice { namespace hfe { namespace world {
using ::dice::hfe::io::PlayerInputMap;

class TargetCompTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);
    unsigned char _pad0[0x14];
    PlayerInputMap m_x14;
    unsigned char _pad1[0x18];
    std::string m_x30;
    bool m_x38;
    bool m_x39;
    unsigned char _pad2[0x6];
    std::string m_x40;
    bool m_x48;
    unsigned char _pad3[0x3];
    float m_x4c;
    bool m_x50;
    bool m_x51;
    unsigned char _pad4[0x2];
    TargetSystem m_x54;
};

bool TargetCompTemplate::makeScript(dice::hfe::io::IStream* stream)
{
    std::ostringstream ss;
    if (m_x14 != 64) {
        ss << "ObjectTemplate.target.targetInput " << m_x14 << std::endl;
    }
    if (m_x30.length() != 0) {
        ss << "ObjectTemplate.target.onLockChangeToWeapon " << m_x38 << " " << m_x30 << std::endl;
    }
    if (m_x4c != 100.0f) {
        ss << "ObjectTemplate.target.maxDistance " << m_x4c << std::endl;
    }
    if (m_x50) {
        ss << "ObjectTemplate.target.setTargetAtMaxDistance " << m_x50 << std::endl;
    }
    if (m_x54 != 0) {
        ss << "ObjectTemplate.target.targetSystem " << m_x54 << std::endl;
    }
    if (m_x40.length() != 0) {
        ss << "ObjectTemplate.target.connectionEffect " << m_x40 << std::endl;
    }
    if (m_x48) {
        ss << "ObjectTemplate.target.connectionEffectOnlyWhenZoomed " << m_x48 << std::endl;
    }
    if (m_x51) {
        ss << "ObjectTemplate.target.useCameraDirectionToTarget " << m_x51 << std::endl;
    }
    if (!m_x39) {
        ss << "ObjectTemplate.target.sendVehicleLockWarning " << false << std::endl;
    }
    std::string s = ss.str();
    return stream->write(s.c_str(), s.length()) == s.length();
}

} } }

