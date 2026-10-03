// FUNCTION: BF2 0x8af750
#include <ostream>
#include <sstream>
#include <string>


struct Obj_8af750 {
    char _pad0[0x108];
    bool flag;
    char _pad1[0x3];
    int f10c;
};

// This target has ~basic_ostringstream fully inlined (locale destructor, VTT
// and vtable rewrites, ios_base::~ios_base), which is what a plain local gives.
struct OssHolder_8af750 {
    std::ostringstream ss;
    OssHolder_8af750() : ss(std::ios_base::out) {}
};

// Separate by-value helper, inlined into the caller below: its NRVO'd return
// slot plus the caller's own RVO'd `std::string()` reproduce the target's TWO
// independent constructions of the returned string, one per path. It takes the
// object rather than the value, otherwise GCC spills the value across the ctor
// call. basic_stringbuf sits at ostringstream+0x08, so egptr/pbase/pptr land at
// +0x20/+0x28/+0x30 and the _M_string fallback at +0x50 (libstdc++ 4.0 ABI).
static std::string fmt_8af750(const Obj_8af750* self)
{
    OssHolder_8af750 h;
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

std::string getReturnValueAsString_8af750(const Obj_8af750* self)
{
    if (!self->flag) return std::string();
    return fmt_8af750(self);
}
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass242_getReturnValueAsString_const (0x8af750)
