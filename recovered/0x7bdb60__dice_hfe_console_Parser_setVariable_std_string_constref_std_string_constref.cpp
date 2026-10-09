// FUNCTION: BF2 0x7bdb60
#include <map>
#include <list>
#include <string>

namespace dice { namespace hfe {
struct NoCaseStringCompare {
    bool operator()(std::string const&, std::string const&) const;
};

namespace console {

class Parser {
public:
    struct Level {
        std::map<std::string, std::string, NoCaseStringCompare> m_vars;
        std::map<std::string, std::string, NoCaseStringCompare> m_consts;
        bool m_b60;
        char _pad61[7];
        std::list<std::string> m_list;
        int m_i78;
        int _pad7c;
        std::string m_str1;
        std::string m_str2;
        std::string m_str3;
        int m_i98;
        int m_i9c;
        bool m_ba0;
        bool m_ba1;
        bool m_ba2;
        bool m_ba3;
        bool m_ba4;
    };

    ~Parser();

    void* _pad0;
    void* _pad8;
    std::string m_str;
    void* _pad18;
    Level m_levels[10];
    Level* m_currentLevel; // +0x6b0
    int m_depth;           // +0x6b8

    bool setVariable(std::string const& name, std::string const& val);
};

bool Parser::setVariable(std::string const& name, std::string const& val)
{
    for (int i = m_depth; i >= 0; --i) {
        std::map<std::string, std::string, NoCaseStringCompare>::iterator it = m_levels[i].m_vars.find(name);
        if (it != m_levels[i].m_vars.end()) {
            it->second = val;
            return true;
        }
    }
    return false;
}

} } }
