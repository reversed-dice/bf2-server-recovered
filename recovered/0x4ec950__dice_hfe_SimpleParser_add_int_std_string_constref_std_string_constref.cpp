// FUNCTION: BF2 0x4ec950
#include <map>
#include <string>
#include <utility>

namespace dice { namespace hfe {

class SimpleParser {
public:
    void add(int id, const std::string& name, const std::string& desc);

    std::map<int, std::string> m_names;
    std::map<int, std::string> m_descs;
    char m_prefix;
};

void SimpleParser::add(int id, const std::string& name, const std::string& desc)
{
    m_names.insert(std::make_pair(id, name));
    m_descs.insert(std::make_pair(id, desc));
}

} }
