// FUNCTION: BF2 0x4ecbf0
#include <map>
#include <string>

namespace dice { namespace hfe {

class SimpleParser {
public:
    void remove(int id);

    std::map<int, std::string> m_map1;  // 0x00
    std::map<int, std::string> m_map2;  // 0x30
};

void SimpleParser::remove(int id)
{
    m_map1.erase(id);
    m_map2.erase(id);
}

} }
