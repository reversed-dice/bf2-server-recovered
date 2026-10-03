// FUNCTION: BF2 0xad84f0
#include <sstream>
#include <string>


static int arg0_ad84f0;
static int arg1_ad84f0;
static int arg2_ad84f0;

// GCC 4.0.3 emits basic_istringstream's constructor out of line (extern
// template, bits/sstream.tcc:225) but inlines its destructor, whereas these
// targets call both. A holder whose own destructor is noinline restores the
// single `CALL ~basic_istringstream` per branch.
struct Iss_ad84f0 {
    std::istringstream ss;
    Iss_ad84f0(const std::string& s) : ss(s, std::ios_base::in) {}
    ~Iss_ad84f0() __attribute__((noinline));
};
Iss_ad84f0::~Iss_ad84f0() {}

void setArgFromString_ad84f0(void* self, int index, const std::string& s)
{
    if (index == 1) {
        Iss_ad84f0 h(s);
        h.ss >> arg0_ad84f0;
        *(void**)((char*)self + 0x38) = &arg0_ad84f0;
        return;
    }
    if (index == 2) {
        Iss_ad84f0 h(s);
        h.ss >> arg1_ad84f0;
        *(void**)((char*)self + 0x40) = &arg1_ad84f0;
        return;
    }
    if (index == 3) {
        Iss_ad84f0 h(s);
        h.ss >> arg2_ad84f0;
        *(void**)((char*)self + 0x48) = &arg2_ad84f0;
        return;
    }
}
// REVERSED_FUNCTION: dice_hfe_animationTools_anonymous_namespace_ConsoleClass105_setArgFromString_int_std_string_constref (0xad84f0)
