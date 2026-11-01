// FUNCTION: BF2 0x852840
#include <string>
#include <cstring>
#include <cstdio>

namespace dice { namespace hfe { namespace io {

void* getConsoleObject_852840(void* objs, const std::string& a, const std::string& b);

typedef std::string (*enumfn_852840)(void*, const std::string&, int);

} } }

extern "C" std::string getEnumName_852840(const std::string& a, const std::string& b, int v)
{
    std::string ret;
    void* p = dice::hfe::io::getConsoleObject_852840(*(void**)0x00f6c690, a, b);
    if (p == 0)
        return std::string("ERROR: Objectname or/and functionname are invalide");
    std::string key;
    std::string orig = (*(dice::hfe::io::enumfn_852840*)(*(char**)p + 0xb0))(p, key, 0);
    std::string s("");
    s.assign(orig);
    char buf[112];
    sprintf(buf, "%d", v);
    key.assign(buf, strlen(buf));
    (*(dice::hfe::io::enumfn_852840*)(*(char**)p + 0xb0))(p, key, 1);
    ret.assign((*(dice::hfe::io::enumfn_852840*)(*(char**)p + 0xb0))(p, key, 0));
    key.assign(orig);
    (*(dice::hfe::io::enumfn_852840*)(*(char**)p + 0xb0))(p, key, 1);
    return ret;
}
// REVERSED_FUNCTION: dice_hfe_io_Console_getEnumName_std_string_constref_std_string_constref_int (0x852840)
