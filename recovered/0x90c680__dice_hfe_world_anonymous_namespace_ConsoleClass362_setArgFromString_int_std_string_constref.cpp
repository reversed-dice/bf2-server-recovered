// FUNCTION: BF2 0x90c680
#include <sstream>
#include <string>

// may_alias is load-bearing, not decoration: without it the final
// `self->arg = &arg` store is scheduled two slots too early, into the shadow of
// the load feeding the last component store. float and void* are unrelated
// types, so type-based alias analysis proves the two stores independent and
// sched2 reorders them; alias set 0 restores the dependence and the target's
// order. `-fno-strict-aliasing` reproduces the same fix, but the flags are
// fixed, and this is the same effect scoped to one type.
struct __attribute__((may_alias)) Vec_90c680 {
    float c0; float c1; float c2;
    Vec_90c680() : c0(0), c1(0), c2(0) {}
};

struct Obj_90c680 {
    char _pad[0x38];
    void* arg;
};

// GCC 4.0.3 emits basic_istringstream's constructor out of line (extern
// template, bits/sstream.tcc:225) but inlines its destructor, whereas the
// target calls both.
struct IssHolder_90c680 {
    std::istringstream ss;
    IssHolder_90c680(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_90c680() __attribute__((noinline));
};
IssHolder_90c680::~IssHolder_90c680() {}

void setArgFromString_90c680(Obj_90c680* self, int index, const std::string& s)
{
    if (index == 1) {
        // Function-local static with a real constructor: that is what produces
        // the target's __cxa_guard_acquire/release pair around the zero stores.
        static Vec_90c680 arg;
        IssHolder_90c680 h(s);
        float f;
        char c;
        h.ss >> f >> c; arg.c0 = f;
        h.ss >> f >> c; arg.c1 = f;
        h.ss >> f; arg.c2 = f;
        self->arg = &arg;
    }
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass362_setArgFromString_int_std_string_constref (0x90c680)
