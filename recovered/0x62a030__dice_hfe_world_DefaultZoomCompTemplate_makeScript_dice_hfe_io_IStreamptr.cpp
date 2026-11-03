// FUNCTION: BF2 0x62a030
// BF2_FLAGS: -fno-strict-aliasing
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
class ZoomCompTemplate {
public:
    virtual ~ZoomCompTemplate();
    virtual bool makeScript(dice::hfe::io::IStream* stream);
};
} } }

namespace dice { namespace hfe { namespace world {

class DefaultZoomCompTemplate : public ::dice::hfe::world::ZoomCompTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);
    unsigned char _pad0[0x18];
    std::vector<float> m_zoomFactors;
    float m_zoomDelay;
    char _pad1[4];
    int m_zoomLod;
    bool m_zoomOutAfterFire;
    float m_changeFovDelay;
    char _pad2[4];
    float m_mouseSpeedMod;
    bool m_disableMuzzleWhenZoomed;
};

bool DefaultZoomCompTemplate::makeScript(dice::hfe::io::IStream* stream)
{
    if (!ZoomCompTemplate::makeScript(stream))
        return false;
    std::ostringstream ss;
    if (m_zoomDelay != 0.5f) {
        ss << "ObjectTemplate.zoom.zoomDelay " << m_zoomDelay << std::endl;
    }
    if (m_zoomLod != 0) {
        ss << "ObjectTemplate.zoom.zoomLod " << m_zoomLod << std::endl;
    }
    for (unsigned int i = 0; i < m_zoomFactors.size(); ++i) {
        ss << "ObjectTemplate.zoom.addZoomFactor " << m_zoomFactors[i] << std::endl;
    }
    if (m_changeFovDelay != -1.0f) {
        ss << "ObjectTemplate.zoom.changeFovDelay " << m_changeFovDelay << std::endl;
    }
    if (m_zoomOutAfterFire) {
        ss << "ObjectTemplate.zoom.zoomOutAfterFire " << m_zoomOutAfterFire << std::endl;
    }
    if (m_mouseSpeedMod != 1.0f) {
        ss << "ObjectTemplate.zoom.mouseSpeedMod " << m_mouseSpeedMod << std::endl;
    }
    if (m_disableMuzzleWhenZoomed) {
        ss << "ObjectTemplate.zoom.disableMuzzleWhenZoomed " << m_disableMuzzleWhenZoomed;
    }
    std::string s = ss.str();
    return stream->write(s.c_str(), s.length()) == s.length();
}

} } }
