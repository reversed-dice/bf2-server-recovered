// FUNCTION: BF2 0x62be00
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
using ::dice::hfe::io::PlayerInputMap;

class ZoomCompTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);
    unsigned char _pad0[0x10];
    PlayerInputMap m_x10;
    bool m_x14;
};

bool ZoomCompTemplate::makeScript(dice::hfe::io::IStream* stream)
{
    std::ostringstream ss;
    if (m_x10 != 31) {
        ss << "ObjectTemplate.zoom.cameraInput " << m_x10 << std::endl;
    }
    if (m_x14) {
        ss << "ObjectTemplate.zoom.onlyZoomWhenProne 1" << std::endl;
    }
    std::string s = ss.str();
    return stream->write(s.c_str(), s.length()) == s.length();
}

} } }

