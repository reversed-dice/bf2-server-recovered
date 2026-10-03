// FUNCTION: BF2 0xac4d10
#include <sstream>
#include <string>

// may_alias is load-bearing, not decoration: without it the final
// `self->arg = &arg` store is scheduled two slots too early, into the shadow of
// the load feeding the last component store. float and void* are unrelated
// types, so type-based alias analysis proves the two stores independent and
// sched2 reorders them; alias set 0 restores the dependence and the target's
// order. `-fno-strict-aliasing` reproduces the same fix, but the flags are
// fixed, and this is the same effect scoped to one type.
struct __attribute__((may_alias)) Vec_ac4d10 {
    float c0; float c1; float c2;
    Vec_ac4d10() : c0(0), c1(0), c2(0) {}
};

struct Obj_ac4d10 {
    char _pad[0x38];
    void* arg;
};

// GCC 4.0.3 emits basic_istringstream's constructor out of line (extern
// template, bits/sstream.tcc:225) but inlines its destructor, whereas the
// target calls both.
struct IssHolder_ac4d10 {
    std::istringstream ss;
    IssHolder_ac4d10(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_ac4d10() __attribute__((noinline));
};
IssHolder_ac4d10::~IssHolder_ac4d10() {}

void setArgFromString_ac4d10(Obj_ac4d10* self, int index, const std::string& s)
{
    if (index == 1) {
        // Function-local static with a real constructor: that is what produces
        // the target's __cxa_guard_acquire/release pair around the zero stores.
        static Vec_ac4d10 arg;
        IssHolder_ac4d10 h(s);
        float f;
        char c;
        h.ss >> f >> c; arg.c0 = f;
        h.ss >> f >> c; arg.c1 = f;
        h.ss >> f; arg.c2 = f;
        self->arg = &arg;
    }
}
// REVERSED_FUNCTION: dice_hfe_tool_anonymous_namespace_ConsoleClass145_setArgFromString_int_std_string_constref (0xac4d10)
