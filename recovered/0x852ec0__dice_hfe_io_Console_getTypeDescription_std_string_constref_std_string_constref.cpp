// FUNCTION: BF2 0x852ec0
#include <string>

namespace dice { namespace hfe { namespace io {

void* getConsoleObject_852ec0(void* objs, const std::string& a, const std::string& b);

typedef std::string (*getfn_852ec0)(void*);

} } }

extern "C" std::string getTypeDescription_852ec0(const std::string& a, const std::string& b)
{
    std::string s;
    void* p = dice::hfe::io::getConsoleObject_852ec0(*(void**)0x00f6c690, a, b);
    if (p == 0)
        return std::string("ERROR: Objectname or/and functionname are invalide");
    s.assign((*(dice::hfe::io::getfn_852ec0*)(*(char**)p + 0xa8))(p));
    return s;
}
