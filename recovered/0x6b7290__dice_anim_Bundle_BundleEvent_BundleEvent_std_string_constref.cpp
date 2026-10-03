// FUNCTION: BF2 0x6b7290
#include <string>
#include <stdio.h>
namespace dice {
namespace hfe { void setLowerCase(std::string& s); }
namespace anim {

class Bundle {
public:
    struct BundleEvent {
        BundleEvent(const std::string& text);
        std::string m_text;
        int m_id;
        int m_type;
    };
};

Bundle::BundleEvent::BundleEvent(const std::string& text)
    : m_text(text), m_id(0), m_type(0)
{
    hfe::setLowerCase(m_text);
    int id = 0;
    if (m_text.find("effect:") != std::string::npos) {
        sscanf(m_text.c_str(), "effect:%d", &id);
        m_type = 2;
    } else if (m_text.find("sound:") != std::string::npos) {
        sscanf(m_text.c_str(), "sound:%d", &id);
        m_type = 1;
    }
    m_id = id;
}

} }
