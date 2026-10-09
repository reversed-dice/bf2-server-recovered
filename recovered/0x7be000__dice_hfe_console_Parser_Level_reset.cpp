// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x7be000
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

        void reset();
    };
};

void Parser::Level::reset()
{
    m_vars.clear();
    m_consts.clear();
    m_b60 = false;
    m_list.clear();
    m_i78 = 0;
    m_str1 = "";
    m_str2 = "";
    m_str3 = "";
    m_i98 = 0;
    m_i9c = 0;
    m_ba0 = false;
    m_ba2 = false;
    m_ba3 = false;
    m_ba1 = false;
    m_ba4 = false;
}

} } }
