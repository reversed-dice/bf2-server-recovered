// FUNCTION: BF2 0x622e90
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
enum TargetType { TargetType_0 };
std::ostream& operator<<(std::ostream& os, TargetType v);
extern float defaultReLockDelay;
} } }

namespace dice { namespace hfe { namespace world {

class SeekClosestTargetCompTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);
    float getMaxAngleLock() const;
    unsigned char _pad0[0x18];
    float m_x18;
    TargetType m_x1c;
    float m_x20;
    unsigned char _pad1[0x4];
    float m_x28;
    unsigned char _pad2[0x4];
    float m_x30;
};

bool SeekClosestTargetCompTemplate::makeScript(dice::hfe::io::IStream* stream)
{
    float maxAngleLock;
    float directionBonus;
    float reLockTime;
    float trackingDelay;
    float maxDistLock;
    std::ostringstream ss;
    ss << "ObjectTemplate.seek.targetType " << m_x1c << std::endl;
    trackingDelay = m_x20;
    ss << "ObjectTemplate.seek.trackingDelay " << trackingDelay << std::endl;
    maxAngleLock = getMaxAngleLock();
    ss << "ObjectTemplate.seek.maxAngleLock " << maxAngleLock << std::endl;
    maxDistLock = m_x18;
    ss << "ObjectTemplate.seek.maxDistLock " << maxDistLock << std::endl;
    directionBonus = m_x30;
    if (directionBonus != 0.0f) {
        ss << "ObjectTemplate.seek.directionBonus " << directionBonus << std::endl;
    }
    reLockTime = m_x28;
    if (reLockTime != defaultReLockDelay) {
        ss << "ObjectTemplate.seek.reLockTime " << reLockTime << std::endl;
    }
    std::string s = ss.str();
    return stream->write(s.c_str(), s.length()) == s.length();
}

} } }
