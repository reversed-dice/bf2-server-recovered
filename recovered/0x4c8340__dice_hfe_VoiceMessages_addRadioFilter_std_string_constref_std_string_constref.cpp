// FUNCTION: BF2 0x4c8340
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <map>
#include <vector>
#include <utility>

namespace dice { namespace hfe {

class VoiceMessages {
public:
    char _pad0[0x88];
    std::map<std::string, int> m_map;
    char _pad1[0x130 - 0x88 - sizeof(std::map<std::string, int>)];
    std::vector<std::string> m_vec;
    int addRadioFilter(const std::string& a, const std::string& b);
};

int VoiceMessages::addRadioFilter(const std::string& a, const std::string& b)
{
    int id = (int)m_vec.size();
    std::map<std::string, int>::iterator it = m_map.lower_bound(a);
    if (it == m_map.end() || a < it->first) {
        it = m_map.insert(it, std::pair<std::string const, int>(a, 0));
    }
    it->second = id;
    m_vec.push_back(b);
    return id;
}

} }
