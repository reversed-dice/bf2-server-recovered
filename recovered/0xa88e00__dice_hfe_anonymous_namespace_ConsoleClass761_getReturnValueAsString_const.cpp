// FUNCTION: BF2 0xa88e00
#include <ostream>
#include <sstream>
#include <string>


struct Obj_a88e00 {
    char _pad0[0x108];
    bool flag;
    char _pad1[0x7];
    std::string f110;
};

// GCC 4.0.3 emits basic_ostringstream's constructor out of line (extern
// template, bits/sstream.tcc:226) but inlines its destructor, whereas this
// target calls both. A holder whose own destructor is noinline restores the
// single `CALL ~basic_ostringstream`.
struct OssHolder_a88e00 {
    std::ostringstream ss;
    OssHolder_a88e00() : ss(std::ios_base::out) {}
    ~OssHolder_a88e00() __attribute__((noinline));
};
OssHolder_a88e00::~OssHolder_a88e00() {}

// Separate by-value helper, inlined into the caller below: its NRVO'd return
// slot plus the caller's own RVO'd `std::string()` reproduce the target's TWO
// independent constructions of the returned string, one per path. It takes the
// object rather than the value, otherwise GCC spills the value across the ctor
// call. basic_stringbuf sits at ostringstream+0x08, so egptr/pbase/pptr land at
// +0x20/+0x28/+0x30 and the _M_string fallback at +0x50 (libstdc++ 4.0 ABI).
static std::string fmt_a88e00(const Obj_a88e00* self)
{
    OssHolder_a88e00 h;
    h.ss << self->f110;
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

std::string getReturnValueAsString_a88e00(const Obj_a88e00* self)
{
    if (!self->flag) return std::string();
    return fmt_a88e00(self);
}
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass761_getReturnValueAsString_const (0xa88e00)
