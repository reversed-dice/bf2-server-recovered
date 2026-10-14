// FUNCTION: BF2 0x8526e0
#include <string>
#include <cstring>

namespace dice { namespace hfe { namespace io {

void* getConsoleObject_8526e0(void* objs, const std::string& a, const std::string& b);

typedef int (*countfn_8526e0)(void*);
typedef const char* (*namefn_8526e0)(void*, int);

} } }

extern "C" std::string getArgumentTypes_8526e0(const std::string& a, const std::string& b)
{
    std::string s;
    void* p = dice::hfe::io::getConsoleObject_8526e0(*(void**)0x00f6c690, a, b);
    if (p == 0)
        return std::string("ERROR: Objectname or/and functionname are invalide");
    int n = (*(dice::hfe::io::countfn_8526e0*)(*(char**)p + 0x58))(p);
    if (n != 0)
    {
        const char* t = (*(dice::hfe::io::namefn_8526e0*)(*(char**)p + 0x48))(p, 0);
        s.append(t, strlen(t));
        for (int i = 1; i < n; ++i)
        {
            s.append(" ", 1);
            const char* u = (*(dice::hfe::io::namefn_8526e0*)(*(char**)p + 0x48))(p, i);
            s.append(u, strlen(u));
        }
    }
    return s;
}
// REVERSED_FUNCTION: dice_hfe_io_Console_getArgumentTypes_std_string_constref_std_string_constref (0x8526e0)
