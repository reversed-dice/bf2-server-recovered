// FUNCTION: BF2 0x852d00
#include <string>

namespace dice { namespace hfe { namespace io {

void* getConsoleObject_852d00(void* objs, const std::string& a, const std::string& b);

typedef std::string (*getfn_852d00)(void*);

} } }

extern "C" std::string getDelta_852d00(const std::string& a, const std::string& b)
{
    std::string s;
    void* p = dice::hfe::io::getConsoleObject_852d00(*(void**)0x00f6c690, a, b);
    if (p == 0)
        return std::string("ERROR: Objectname or/and functionname are invalide");
    s.assign((*(dice::hfe::io::getfn_852d00*)(*(char**)p + 0x80))(p));
    return s;
}
