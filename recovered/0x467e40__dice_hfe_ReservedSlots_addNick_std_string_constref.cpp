// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
// FUNCTION: BF2 0x467e40
#include <string>
#include <vector>

namespace dice { namespace hfe {

class ReservedSlots {
public:
    void addNick(std::string const& nick);

private:
    std::string m_configFile;                 // offset 0x00
    std::vector<std::string> m_slots;         // offset 0x08
};

void ReservedSlots::addNick(std::string const& nick)
{
    std::vector<std::string>::const_iterator it = m_slots.begin();
    std::string s(nick);
    std::string::size_type p = s.find(" ", 0, 1);
    if (p != std::string::npos)
        s = s.substr(p + 1, s.size());
    for (; it != m_slots.end(); ++it)
        if (*it == s)
            return;
    m_slots.push_back(s);
}

} }
