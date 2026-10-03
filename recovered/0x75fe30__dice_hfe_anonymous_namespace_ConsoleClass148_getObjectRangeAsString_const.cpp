// FUNCTION: BF2 0x75fe30
#include <ostream>
#include <sstream>
#include <string>

namespace dice { namespace hfe {

// GCC 4.0.3 emits basic_ostringstream's constructor out of line (extern
// template, bits/sstream.tcc:226) but inlines its destructor, whereas this
// target calls both. A holder whose own destructor is noinline restores the
// single `CALL ~basic_ostringstream`.
struct OssHolder_75fe30 {
    std::ostringstream ss;
    OssHolder_75fe30() : ss(std::ios_base::out) {}
    ~OssHolder_75fe30() __attribute__((noinline));
};
OssHolder_75fe30::~OssHolder_75fe30() {}

struct Obj_75fe30 {
    char _pad[0x110];
    float lo;
    float hi;
};

struct PairSS_75fe30 {
    std::string first;
    std::string second;
    PairSS_75fe30(const std::string& a, const std::string& b) : first(a), second(b) {}
};

// basic_stringbuf sits at ostringstream+0x08, so egptr/pbase/pptr land at
// +0x20/+0x28/+0x30 and the _M_string fallback at +0x50 (libstdc++ 4.0 ABI).
// always_inline is required: used twice, GCC 4.0 emits this out of line and
// the whole shape collapses to 37.84%.
static inline __attribute__((always_inline))
void grab_75fe30(std::string& out, const OssHolder_75fe30& h)
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

// Same thing returning BY VALUE. Its NRVO'd slot is a compiler temporary, and
// expand_used_vars lays temporaries out before block-scoped locals, which is
// what puts the second string one slot above the first. A named local here
// swaps the two slots and costs 6 points. See this module's docstring.
static inline __attribute__((always_inline))
std::string fmt_75fe30(const OssHolder_75fe30& h)
{
    std::string result;
    grab_75fe30(result, h);
    return result;
}

PairSS_75fe30 getObjectRangeAsString_75fe30(Obj_75fe30* self)
{
    self->lo = 0.0f;
    self->hi = 360.0f;
    OssHolder_75fe30 h1;
    h1.ss << 0.0;
    std::string s1;
    grab_75fe30(s1, h1);
    OssHolder_75fe30 h2;
    h2.ss << 360.0;
    return PairSS_75fe30(s1, fmt_75fe30(h2));
}

} }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass148_getObjectRangeAsString_const (0x75fe30)
