// FUNCTION: BF2 0x852bb0
#include <string>
#include <utility>

namespace dice { namespace hfe { namespace io {

void* getConsoleObject_852bb0(void* objs, const std::string& a, const std::string& b);

typedef std::pair<std::string, std::string> (*getfn_852bb0)(void*);

} } }

extern "C" std::string getRange_852bb0(const std::string& a, const std::string& b)
{
    std::string s;
    void* p = dice::hfe::io::getConsoleObject_852bb0(*(void**)0x00f6c690, a, b);
    if (p == 0)
        return std::string("ERROR: Objectname or/and functionname are invalide");
    std::pair<std::string, std::string> r = (*(dice::hfe::io::getfn_852bb0*)(*(char**)p + 0x78))(p);
    s.append(r.first);
    s.append(" ", 1);
    s.append(r.second);
    return s;
}
