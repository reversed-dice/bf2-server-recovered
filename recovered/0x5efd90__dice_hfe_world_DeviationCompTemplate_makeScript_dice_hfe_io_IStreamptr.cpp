// FUNCTION: BF2 0x5efd90
#include <sstream>
#include <string>
namespace dice { namespace hfe {

namespace io {
class IStream {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual unsigned int write(const char* data, unsigned int size);
};
}

namespace world {

class DeviationCompTemplate {
public:
    bool makeScript(io::IStream* stream);
    unsigned char _pad[0x10];
    float m_dev1;
    float m_dev2;
    float m_fireDev;
    float m_minDev;
    float m_subProjectileDev;
};

bool DeviationCompTemplate::makeScript(io::IStream* stream)
{
    std::ostringstream ss(std::ios_base::out);
    if (m_dev1 != 0.0f || m_dev2 != 0.0f || m_fireDev != 0.0f)
        ss << "ObjectTemplate.deviation.setFireDev " << m_fireDev << " " << m_dev1 << " " << m_dev2 << std::endl;
    if (m_minDev != 0.0f)
        ss << "ObjectTemplate.deviation.minDev " << m_minDev << std::endl;
    if (m_subProjectileDev != 0.0f)
        ss << "ObjectTemplate.deviation.subProjectileDev " << m_subProjectileDev << std::endl;
    std::string s = ss.str();
    return stream->write(s.data(), s.length()) == s.length();
}

} } }
