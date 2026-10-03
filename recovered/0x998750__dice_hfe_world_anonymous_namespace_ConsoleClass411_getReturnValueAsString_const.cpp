// FUNCTION: BF2 0x998750
#include <ostream>
#include <sstream>
#include <string>

struct Opaque10c_998750 { char _b[0x1]; };
std::ostream& operator<<(std::ostream&, const Opaque10c_998750&);
struct Obj_998750 {
    char _pad0[0x108];
    bool flag;
    char _pad1[0x3];
    Opaque10c_998750 f10c;
};

// GCC 4.0.3 emits basic_ostringstream's constructor out of line (extern
// template, bits/sstream.tcc:226) but inlines its destructor, whereas this
// target calls both. A holder whose own destructor is noinline restores the
// single `CALL ~basic_ostringstream`.
struct OssHolder_998750 {
    std::ostringstream ss;
    OssHolder_998750() : ss(std::ios_base::out) {}
    ~OssHolder_998750() __attribute__((noinline));
};
OssHolder_998750::~OssHolder_998750() {}

// Separate by-value helper, inlined into the caller below: its NRVO'd return
// slot plus the caller's own RVO'd `std::string()` reproduce the target's TWO
// independent constructions of the returned string, one per path. It takes the
// object rather than the value, otherwise GCC spills the value across the ctor
// call. basic_stringbuf sits at ostringstream+0x08, so egptr/pbase/pptr land at
// +0x20/+0x28/+0x30 and the _M_string fallback at +0x50 (libstdc++ 4.0 ABI).
static std::string fmt_998750(const Obj_998750* self)
{
    OssHolder_998750 h;
    h.ss << self->f10c;
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

std::string getReturnValueAsString_998750(const Obj_998750* self)
{
    if (!self->flag) return std::string();
    return fmt_998750(self);
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass411_getReturnValueAsString_const (0x998750)
