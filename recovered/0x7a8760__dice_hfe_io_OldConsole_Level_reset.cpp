// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x7a8760
#include <string>
#include <map>
#include <list>

namespace dice { namespace hfe {
class NoCaseStringCompare {
public:
    bool operator()(std::string const& a, std::string const& b) const;
};
} }

struct Lvl_7a8760 {
    std::map<std::string, std::string, dice::hfe::NoCaseStringCompare> m_a;
    std::map<std::string, std::string, dice::hfe::NoCaseStringCompare> m_b;
    char m_60;
    std::list<std::string> m_l;
    int m_78;
    std::string m_s1;
    std::string m_s2;
    std::string m_s3;
    int m_98;
    int m_9c;
    int m_a0;
    char m_a4;
    char m_a6;
    char m_a7;
    char m_a5;
    char m_a8;
};

extern "C" void OldConsole_Level_reset_7a8760(void* self) {
    Lvl_7a8760* p = (Lvl_7a8760*)self;
    p->m_a.clear();
    p->m_b.clear();
    p->m_60 = 0;
    p->m_l.clear();
    p->m_78 = 0;
    p->m_s1 = "";
    p->m_s2 = "";
    p->m_s3 = "";
    p->m_98 = 0;
    p->m_9c = 0;
    p->m_a0 = 0;
    p->m_a4 = 0;
    p->m_a7 = 0;
    p->m_a5 = 0;
    p->m_a6 = 0;
    p->m_a8 = 0;
}
