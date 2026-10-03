// FUNCTION: BF2 0x8d9710
#include <sstream>
#include <string>


static float arg0_8d9710;
static float arg1_8d9710;
static float arg2_8d9710;

// GCC 4.0.3 emits basic_istringstream's constructor out of line (extern
// template, bits/sstream.tcc:225) but inlines its destructor, whereas these
// targets call both. A holder whose own destructor is noinline restores the
// single `CALL ~basic_istringstream` per branch.
struct Iss_8d9710 {
    std::istringstream ss;
    Iss_8d9710(const std::string& s) : ss(s, std::ios_base::in) {}
    ~Iss_8d9710() __attribute__((noinline));
};
Iss_8d9710::~Iss_8d9710() {}

void setArgFromString_8d9710(void* self, int index, const std::string& s)
{
    if (index == 1) {
        Iss_8d9710 h(s);
        h.ss >> arg0_8d9710;
        *(void**)((char*)self + 0x38) = &arg0_8d9710;
        return;
    }
    if (index == 2) {
        Iss_8d9710 h(s);
        h.ss >> arg1_8d9710;
        *(void**)((char*)self + 0x40) = &arg1_8d9710;
        return;
    }
    if (index == 3) {
        Iss_8d9710 h(s);
        h.ss >> arg2_8d9710;
        *(void**)((char*)self + 0x48) = &arg2_8d9710;
        return;
    }
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass436_setArgFromString_int_std_string_constref (0x8d9710)
