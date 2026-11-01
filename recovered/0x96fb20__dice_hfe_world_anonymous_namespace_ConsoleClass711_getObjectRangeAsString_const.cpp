// v03: v02 + `return ret;` (the sret pointer: target ends with MOV RAX,R15, the
// std::pair ctor (0x889480) through an extern "C" helper, so the homemade
// ctor is not inlined and the sret stays a raw void* in R15.
// FUNCTION: BF2 0x96fb20
#include <ostream>
#include <sstream>
#include <string>

namespace dice { namespace hfe {

struct OssHolder_96fb20 {
    std::ostringstream ss;
    OssHolder_96fb20() : ss(std::ios_base::out) {}
    ~OssHolder_96fb20() __attribute__((noinline));
};
OssHolder_96fb20::~OssHolder_96fb20() {}

struct Obj_96fb20 {
    char _pad[0x110];
    float lo;
    float hi;
};

extern "C" void std_pair_96fb20(void*, const std::string&, const std::string&);

static inline __attribute__((always_inline))
void grab_96fb20(std::string& out, const OssHolder_96fb20& h)
{
    const char* base = reinterpret_cast<const char*>(&h);
    const char* pp = *reinterpret_cast<const char* const*>(base + 0x30);
    if (pp) {
        const char* eg = *reinterpret_cast<const char* const*>(base + 0x20);
        if (pp > eg) {
            out.assign(std::string(*reinterpret_cast<const char* const*>(base + 0x28), pp));
        } else {
            out.assign(std::string(*reinterpret_cast<const char* const*>(base + 0x28), eg));
        }
    } else {
        out.assign(*reinterpret_cast<const std::string*>(base + 0x50));
    }
}

static inline __attribute__((always_inline))
std::string fmt_96fb20(const OssHolder_96fb20& h)
{
    std::string result;
    grab_96fb20(result, h);
    return result;
}

void* getObjectRangeAsString_96fb20(void* ret, Obj_96fb20* self)
{
    self->lo = 0.0f;
    self->hi = 1.0f;
    OssHolder_96fb20 h1;
    h1.ss << 0.0;
    std::string s1;
    grab_96fb20(s1, h1);
    OssHolder_96fb20 h2;
    h2.ss << 1.0;
    std_pair_96fb20(ret, s1, fmt_96fb20(h2));
    return ret;
}

} }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass711_getObjectRangeAsString_const (0x96fb20)
