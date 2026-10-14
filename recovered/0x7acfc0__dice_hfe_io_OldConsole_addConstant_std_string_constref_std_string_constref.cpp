// FUNCTION: BF2 0x7acfc0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <map>
#include <list>
#include <utility>

namespace dice { namespace hfe {

class NoCaseStringCompare {
public:
    bool operator()(std::string const& a, std::string const& b) const;
};

} }

namespace dice { namespace hfe { namespace io {

class OldConsole {
public:
    typedef std::map<std::string, std::string, NoCaseStringCompare> MapType;

    struct Level {
        MapType m_vars;
        MapType m_consts;
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
        char _padB[8];
    };

    char _pad0[0x238];
    Level m_levels[10];
    Level* m_currentLevel;
    int m_depth;

    bool addConstant(std::string const& name, std::string const& value);
};

bool OldConsole::addConstant(std::string const& name, std::string const& value) {
    MapType::iterator it = m_levels[m_depth].m_consts.find(name);
    if (it != m_levels[m_depth].m_consts.end())
        return false;
    MapType::value_type entry(name, value);
    m_levels[m_depth].m_consts.insert(entry);
    return true;
}

} } }
