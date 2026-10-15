// FUNCTION: BF2 0x4c7b50
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <map>
#include <utility>

namespace dice { namespace hfe {

class VoiceMessages {
public:
    char m_pad_0x00[0x28];
    std::map<std::string, int> m_messages;
    int addMessage(std::string const& name);
};

int VoiceMessages::addMessage(std::string const& name)
{
    if (m_messages.size() > 0xFF)
        return -1;
    int id = (int)m_messages.size();
    std::map<std::string, int>::iterator it = m_messages.lower_bound(name);
    if (it == m_messages.end() || name.compare(it->first) < 0) {
        it = m_messages.insert(it, std::pair<std::string const, int>(name, 0));
    }
    it->second = id;
    return id;
}

} }
