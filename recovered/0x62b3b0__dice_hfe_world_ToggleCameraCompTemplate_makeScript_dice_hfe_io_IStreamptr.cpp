// FUNCTION: BF2 0x62b3b0
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
class ZoomCompTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);
};
} } }

namespace dice { namespace hfe { namespace world {

class ToggleCameraCompTemplate : public ::dice::hfe::world::ZoomCompTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);
    unsigned char _pad0[0x1c];
    int m_x1c;
    int m_x20;
    int m_x24;
    int m_x28;
    bool m_x2c;
    bool m_x2d;
};

bool ToggleCameraCompTemplate::makeScript(dice::hfe::io::IStream* stream)
{
    if (!ZoomCompTemplate::makeScript(stream))
        return false;
    std::ostringstream ss;
    if (m_x1c != -1) {
        ss << "ObjectTemplate.zoom.changeCameraId " << m_x1c << std::endl;
        if (m_x20 != 2) {
            ss << "ObjectTemplate.zoom.changeCameraViewMode " << m_x20 << std::endl;
        }
    }
    if (m_x24 != -1) {
        ss << "ObjectTemplate.zoom.startCameraId " << m_x24 << std::endl;
        if (m_x28 != 2) {
            ss << "ObjectTemplate.zoom.startCameraViewMode " << m_x28 << std::endl;
        }
    }
    if (m_x2c) {
        ss << "ObjectTemplate.zoom.useProjectileCamera " << m_x2c << std::endl;
    }
    if (!m_x2d) {
        ss << "ObjectTemplate.zoom.allowUntoggledFire " << false << std::endl;
    }
    std::string s = ss.str();
    return stream->write(s.c_str(), s.length()) == s.length();
}

} } }

