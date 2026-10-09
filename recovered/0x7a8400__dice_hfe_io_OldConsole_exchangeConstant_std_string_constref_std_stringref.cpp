// FUNCTION: BF2 0x7a8400
#include <map>
#include <list>
#include <string>

namespace dice { namespace hfe {
struct NoCaseStringCompare {
    bool operator()(std::string const&, std::string const&) const;
};

namespace io {

class OldConsole {
public:
    struct Level {
        std::map<std::string, std::string, NoCaseStringCompare> m_vars;
        std::map<std::string, std::string, NoCaseStringCompare> m_consts;
        char _pad[0xb0 - 0x60];
    };

    char _pad[0x238];
    Level m_levels[10];
    Level* m_currentLevel; // +0x918
    int m_depth;           // +0x920

    bool exchangeConstant(std::string const& name, std::string& val);
    bool exchangeVariable(std::string const& name, std::string& val);
    bool setVariable(std::string const& name, std::string const& val);
};

bool OldConsole::exchangeConstant(std::string const& name, std::string& val)
{
    for (int i = m_depth; i >= 0; --i) {
        std::map<std::string, std::string, NoCaseStringCompare>::iterator it = m_levels[i].m_consts.find(name);
        if (it != m_levels[i].m_consts.end()) {
            val = it->second;
            return true;
        }
    }
    return false;
}

} } }
