// FUNCTION: BF2 0x757b40
#include <ostream>
#include <sstream>
#include <string>

// GCC 4.0.3 emits basic_ostringstream's constructor out of line (extern
// template, bits/sstream.tcc:226) but inlines its destructor, whereas this
// target calls both. A holder whose own destructor is noinline restores the
// single `CALL ~basic_ostringstream`.
struct OssHolder_757b40 {
    std::ostringstream ss;
    OssHolder_757b40() : ss(std::ios_base::out) {}
    ~OssHolder_757b40() __attribute__((noinline));
};
OssHolder_757b40::~OssHolder_757b40() {}

std::string getObjectDeltaAsString_757b40()
{
    OssHolder_757b40 h;
    // Absolute dereference of the target's own constant, never a re-typed
    // literal: the scorer normalises addresses, so a wrong value would pass.
    h.ss << *(const double*)0x00b96e68;
    std::string result;
    // basic_stringbuf sits at ostringstream+0x08, so egptr/pbase/pptr land at
    // +0x20/+0x28/+0x30 and the _M_string fallback at +0x50 (libstdc++ 4.0 ABI).
    const char* base = reinterpret_cast<const char*>(&h);
    const char* pp = *reinterpret_cast<const char* const*>(base + 0x30);
    if (pp) {
        const char* eg = *reinterpret_cast<const char* const*>(base + 0x20);
        // Unnamed temporaries on purpose: two same-typed named locals in
        // sibling scopes share one stack slot, the target uses two.
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
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass149_getObjectDeltaAsString_const (0x757b40)
