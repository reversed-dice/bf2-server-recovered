// FUNCTION: BF2 0x853130
#include <string>

namespace dice { namespace hfe { namespace io {

// Declared, not defined: the target CALLs it, so this is a relocation. The two
// string arguments arrive in RSI and RDX and are passed straight through, which
// is why the call sets up only RDI.
void* getConsoleObject_853130(void* objs, const std::string& a, const std::string& b);

typedef bool (*hasfn_853130)(void*);

} } }

extern "C" std::string hasBundledType_853130(const std::string& a, const std::string& b)
{
    // Two different return objects, so no NRVO: the target copies this local
    // into the hidden return slot instead of building it there.
    std::string s;
    void* p = dice::hfe::io::getConsoleObject_853130(*(void**)0x00f6c690, a, b);
    if (p == 0)
        return std::string("ERROR: Objectname or/and functionname are invalide");
    if ((*(dice::hfe::io::hasfn_853130*)(*(char**)p + 0x98))(p))
        s.append("1", 1);
    else
        s.append("0", 1);
    return s;
}
// REVERSED_FUNCTION: dice_hfe_io_Console_isSetGet_std_string_constref_std_string (0x853130)
