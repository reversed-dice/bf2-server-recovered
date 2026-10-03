// FUNCTION: BF2 0x9d8b40
#include <sstream>
#include <string>

// may_alias is load-bearing, not decoration: without it the final
// `self->arg = &arg` store is scheduled two slots too early, into the shadow of
// the load feeding the last component store. float and void* are unrelated
// types, so type-based alias analysis proves the two stores independent and
// sched2 reorders them; alias set 0 restores the dependence and the target's
// order. `-fno-strict-aliasing` reproduces the same fix, but the flags are
// fixed, and this is the same effect scoped to one type.
struct __attribute__((may_alias)) Vec_9d8b40 {
    float c0; float c1; float c2; float c3;
    Vec_9d8b40() : c0(0), c1(0), c2(0), c3(0) {}
};

struct Obj_9d8b40 {
    char _pad[0x38];
    void* arg;
};

// GCC 4.0.3 emits basic_istringstream's constructor out of line (extern
// template, bits/sstream.tcc:225) but inlines its destructor, whereas the
// target calls both.
struct IssHolder_9d8b40 {
    std::istringstream ss;
    IssHolder_9d8b40(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_9d8b40() __attribute__((noinline));
};
IssHolder_9d8b40::~IssHolder_9d8b40() {}

void setArgFromString_9d8b40(Obj_9d8b40* self, int index, const std::string& s)
{
    if (index == 1) {
        // Function-local static with a real constructor: that is what produces
        // the target's __cxa_guard_acquire/release pair around the zero stores.
        static Vec_9d8b40 arg;
        IssHolder_9d8b40 h(s);
        float f;
        char c;
        h.ss >> f >> c; arg.c0 = f;
        h.ss >> f >> c; arg.c1 = f;
        h.ss >> f >> c; arg.c2 = f;
        h.ss >> f; arg.c3 = f;
        self->arg = &arg;
    }
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass196_setArgFromString_int_std_string_constref (0x9d8b40)
