// FUNCTION: BF2 0xa46e30
#include <sstream>
#include <string>

struct Obj_a46e30 {
    char _pad0[0x108];
    bool flag;
    char _pad1[0x3];
    float f10c;
};

// std::ostringstream inside a holder whose destructor is deliberately noinline:
// GCC 4.0.3 emits the constructor out of line (extern template, sstream.tcc)
// but inlines the destructor, whereas the target calls both.
struct OssHolder_a46e30 {
    std::ostringstream ss;
    OssHolder_a46e30() : ss(std::ios_base::out) {}
    ~OssHolder_a46e30() __attribute__((noinline));
};
OssHolder_a46e30::~OssHolder_a46e30() {}

// Separate by-value helper, inlined into the caller below: its NRVO'd return
// slot plus the caller's own RVO'd `std::string()` reproduce the target's TWO
// independent constructions of the returned string, one per path. It takes the
// object rather than the value, otherwise GCC spills the value across the ctor
// call. basic_stringbuf sits at ostringstream+0x08, so egptr/pbase/pptr land at
// +0x20/+0x28/+0x30 and the _M_string fallback at +0x50 (libstdc++ 4.0 ABI).
static std::string fmt_a46e30(const Obj_a46e30* self)
{
    OssHolder_a46e30 h;
    h.ss << (double)self->f10c;
    std::string result;
    const char* base = reinterpret_cast<const char*>(&h);
    const char* pp = *reinterpret_cast<const char* const*>(base + 0x30);
    if (pp) {
        const char* eg = *reinterpret_cast<const char* const*>(base + 0x20);
        // Unnamed temporaries on purpose: two same-typed named locals in sibling
        // scopes share one stack slot, the target uses two (0x160 and 0x170).
        if (pp > eg) {
            result.assign(std::string(*reinterpret_cast<const char* const*>(base + 0x28), pp));
        } else {
            result.assign(std::string(*reinterpret_cast<const char* const*>(base + 0x28), eg));
        }
    } else {
        result.assign(*reinterpret_cast<const std::string*>(base + 0x50));
    }
    return result;
}

std::string getReturnValueAsString_a46e30(const Obj_a46e30* self)
{
    if (!self->flag) return std::string();
    return fmt_a46e30(self);
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass63_getReturnValueAsString_const (0xa46e30)
