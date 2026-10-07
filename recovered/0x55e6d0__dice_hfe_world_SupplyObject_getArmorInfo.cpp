// FUNCTION: BF2 0x55e6d0
#include <string>

namespace dice { namespace hfe {

std::string formatString(const char* fmt, ...);

namespace world {

class SupplyObject {
public:
    std::string getArmorInfo();

    unsigned char m_pad[0x240];
    int m_team;      // 0x240
    float m_a;       // 0x244
    float m_b;       // 0x248
    float m_c;       // 0x24c
};

std::string SupplyObject::getArmorInfo()
{
    return formatString("%.1f/%.1f/%.1f team:%d", m_a, m_b, m_c, m_team);
}

} } }
