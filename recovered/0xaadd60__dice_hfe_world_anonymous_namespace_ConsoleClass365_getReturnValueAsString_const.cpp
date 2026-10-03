// FUNCTION: BF2 0xaadd60
#include <sstream>
#include <string>

struct Obj_aadd60 {
    char _pad0[0x108];
    bool flag;
    char _pad1[0x1];
    bool f10a;
};

// std::ostringstream inside a holder whose destructor is deliberately noinline:
// GCC 4.0.3 emits the constructor out of line (extern template, sstream.tcc)
// but inlines the destructor, whereas the target calls both.
struct OssHolder_aadd60 {
    std::ostringstream ss;
    OssHolder_aadd60() : ss(std::ios_base::out) {}
    ~OssHolder_aadd60() __attribute__((noinline));
};
OssHolder_aadd60::~OssHolder_aadd60() {}

// Separate by-value helper, inlined into the caller below: its NRVO'd return
// slot plus the caller's own RVO'd `std::string()` reproduce the target's TWO
// independent constructions of the returned string, one per path. It takes the
// object rather than the value, otherwise GCC spills the value across the ctor
// call. basic_stringbuf sits at ostringstream+0x08, so egptr/pbase/pptr land at
// +0x20/+0x28/+0x30 and the _M_string fallback at +0x50 (libstdc++ 4.0 ABI).
static std::string fmt_aadd60(const Obj_aadd60* self)
{
    OssHolder_aadd60 h;
    h.ss << self->f10a;
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

std::string getReturnValueAsString_aadd60(const Obj_aadd60* self)
{
    if (!self->flag) return std::string();
    return fmt_aadd60(self);
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass365_getReturnValueAsString_const (0xaadd60)
