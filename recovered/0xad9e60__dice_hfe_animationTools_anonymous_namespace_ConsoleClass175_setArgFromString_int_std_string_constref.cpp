// FUNCTION: BF2 0xad9e60
#include <sstream>
#include <string>


static float arg0_ad9e60;
static float arg1_ad9e60;
static float arg2_ad9e60;

// GCC 4.0.3 emits basic_istringstream's constructor out of line (extern
// template, bits/sstream.tcc:225) but inlines its destructor, whereas these
// targets call both. A holder whose own destructor is noinline restores the
// single `CALL ~basic_istringstream` per branch.
struct Iss_ad9e60 {
    std::istringstream ss;
    Iss_ad9e60(const std::string& s) : ss(s, std::ios_base::in) {}
    ~Iss_ad9e60() __attribute__((noinline));
};
Iss_ad9e60::~Iss_ad9e60() {}

void setArgFromString_ad9e60(void* self, int index, const std::string& s)
{
    if (index == 1) {
        Iss_ad9e60 h(s);
        h.ss >> arg0_ad9e60;
        *(void**)((char*)self + 0x38) = &arg0_ad9e60;
        return;
    }
    if (index == 2) {
        Iss_ad9e60 h(s);
        h.ss >> arg1_ad9e60;
        *(void**)((char*)self + 0x40) = &arg1_ad9e60;
        return;
    }
    if (index == 3) {
        Iss_ad9e60 h(s);
        h.ss >> arg2_ad9e60;
        *(void**)((char*)self + 0x48) = &arg2_ad9e60;
        return;
    }
}
// REVERSED_FUNCTION: dice_hfe_animationTools_anonymous_namespace_ConsoleClass175_setArgFromString_int_std_string_constref (0xad9e60)
