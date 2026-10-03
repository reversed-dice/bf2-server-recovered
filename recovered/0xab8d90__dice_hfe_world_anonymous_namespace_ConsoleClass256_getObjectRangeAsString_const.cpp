// FUNCTION: BF2 0xab8d90
#include <ostream>
#include <sstream>
#include <string>

namespace dice { namespace hfe {

// GCC 4.0.3 emits basic_ostringstream's constructor out of line (extern
// template, bits/sstream.tcc:226) but inlines its destructor, whereas this
// target calls both. A holder whose own destructor is noinline restores the
// single `CALL ~basic_ostringstream`.
struct OssHolder_ab8d90 {
    std::ostringstream ss;
    OssHolder_ab8d90() : ss(std::ios_base::out) {}
    ~OssHolder_ab8d90() __attribute__((noinline));
};
OssHolder_ab8d90::~OssHolder_ab8d90() {}

struct Obj_ab8d90 {
    char _pad[0x110];
    int lo;
    int hi;
};

struct PairSS_ab8d90 {
    std::string first;
    std::string second;
    PairSS_ab8d90(const std::string& a, const std::string& b) : first(a), second(b) {}
};

// basic_stringbuf sits at ostringstream+0x08, so egptr/pbase/pptr land at
// +0x20/+0x28/+0x30 and the _M_string fallback at +0x50 (libstdc++ 4.0 ABI).
// always_inline is required: used twice, GCC 4.0 emits this out of line and
// the whole shape collapses to 37.84%.
static inline __attribute__((always_inline))
void grab_ab8d90(std::string& out, const OssHolder_ab8d90& h)
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
std::string fmt_ab8d90(const OssHolder_ab8d90& h)
{
    std::string result;
    grab_ab8d90(result, h);
    return result;
}

PairSS_ab8d90 getObjectRangeAsString_ab8d90(Obj_ab8d90* self)
{
    self->lo = 0;
    self->hi = 20;
    OssHolder_ab8d90 h1;
    h1.ss << (long)0;
    std::string s1;
    grab_ab8d90(s1, h1);
    OssHolder_ab8d90 h2;
    h2.ss << (long)20;
    return PairSS_ab8d90(s1, fmt_ab8d90(h2));
}

} }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass256_getObjectRangeAsString_const (0xab8d90)
