// FUNCTION: BF2 0x978f70
#include <ostream>
#include <sstream>
#include <string>

namespace dice { namespace hfe {

// GCC 4.0.3 emits basic_ostringstream's constructor out of line (extern
// template, bits/sstream.tcc:226) but inlines its destructor, whereas this
// target calls both. A holder whose own destructor is noinline restores the
// single `CALL ~basic_ostringstream`.
struct OssHolder_978f70 {
    std::ostringstream ss;
    OssHolder_978f70() : ss(std::ios_base::out) {}
    ~OssHolder_978f70() __attribute__((noinline));
};
OssHolder_978f70::~OssHolder_978f70() {}

struct Obj_978f70 {
    char _pad[0x110];
    int lo;
    int hi;
};

// Constructor declared and deliberately NOT defined: the target calls the
// shared std::pair<std::string,std::string> constructor out of line, and the
// scorer compiles with -c so the unresolved symbol costs nothing.
struct PairSS_978f70 {
    std::string first;
    std::string second;
    PairSS_978f70(const std::string& a, const std::string& b);
};

// basic_stringbuf sits at ostringstream+0x08, so egptr/pbase/pptr land at
// +0x20/+0x28/+0x30 and the _M_string fallback at +0x50 (libstdc++ 4.0 ABI).
// always_inline is required: used twice, GCC 4.0 emits this out of line.
static inline __attribute__((always_inline))
void grab_978f70(std::string& out, const OssHolder_978f70& h)
{
    const char* base = reinterpret_cast<const char*>(&h);
    const char* pp = *reinterpret_cast<const char* const*>(base + 0x30);
    if (pp) {
        const char* eg = *reinterpret_cast<const char* const*>(base + 0x20);
        // Unnamed temporaries on purpose: two same-typed named locals in
        // sibling scopes would share one stack slot, the target uses two.
        if (pp > eg) {
            out.assign(std::string(*reinterpret_cast<const char* const*>(base + 0x28), pp));
        } else {
            out.assign(std::string(*reinterpret_cast<const char* const*>(base + 0x28), eg));
        }
    } else {
        out.assign(*reinterpret_cast<const std::string*>(base + 0x50));
    }
}

// Same thing returning BY VALUE, so the second string is a compiler
// temporary. expand_used_vars lays temporaries out before block-scoped
// locals, which is what puts it one stack slot above the first string.
static inline __attribute__((always_inline))
std::string fmt_978f70(const OssHolder_978f70& h)
{
    std::string result;
    grab_978f70(result, h);
    return result;
}

PairSS_978f70 getObjectRangeAsString_978f70(Obj_978f70* self)
{
    self->lo = 0;
    self->hi = 6;
    OssHolder_978f70 h1;
    h1.ss << (long)0;
    std::string s1;
    grab_978f70(s1, h1);
    OssHolder_978f70 h2;
    h2.ss << (long)6;
    return PairSS_978f70(s1, fmt_978f70(h2));
}

} }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass1171_getObjectRangeAsString_const (0x978f70)
