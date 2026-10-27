// BF2_FLAGS: -fno-tree-loop-optimize -fno-strict-aliasing
// FUNCTION: BF2 0x468070
#include <string>
#include <vector>

namespace dice { namespace hfe {

class ReservedSlots {
public:
    bool isNickReserved(std::string const& nick) const;

private:
    std::string m_configFile;             // 0x00
    std::vector<std::string> m_slots;     // 0x08
};

bool ReservedSlots::isNickReserved(std::string const& nick) const
{
    std::vector<std::string>::const_iterator it = m_slots.begin();
    while (it != m_slots.end()) {
        std::string s(nick);
        std::string::size_type pos = s.find(" ", 0, 1);
        if (pos != std::string::npos)
            s = s.substr(pos + 1, s.size());
        if (*it == s)
            return true;
        ++it;
    }
    return false;
}

} }
