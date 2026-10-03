// FUNCTION: BF2 0xad9190
#include <sstream>
#include <string>


static int arg0_ad9190;
static int arg1_ad9190;
static float arg2_ad9190;

// GCC 4.0.3 emits basic_istringstream's constructor out of line (extern
// template, bits/sstream.tcc:225) but inlines its destructor, whereas these
// targets call both. A holder whose own destructor is noinline restores the
// single `CALL ~basic_istringstream` per branch.
struct Iss_ad9190 {
    std::istringstream ss;
    Iss_ad9190(const std::string& s) : ss(s, std::ios_base::in) {}
    ~Iss_ad9190() __attribute__((noinline));
};
Iss_ad9190::~Iss_ad9190() {}

void setArgFromString_ad9190(void* self, int index, const std::string& s)
{
    if (index == 1) {
        Iss_ad9190 h(s);
        h.ss >> arg0_ad9190;
        *(void**)((char*)self + 0x38) = &arg0_ad9190;
        return;
    }
    if (index == 2) {
        Iss_ad9190 h(s);
        h.ss >> arg1_ad9190;
        *(void**)((char*)self + 0x40) = &arg1_ad9190;
        return;
    }
    if (index == 3) {
        Iss_ad9190 h(s);
        h.ss >> arg2_ad9190;
        *(void**)((char*)self + 0x48) = &arg2_ad9190;
        return;
    }
}
// REVERSED_FUNCTION: dice_hfe_animationTools_anonymous_namespace_ConsoleClass117_setArgFromString_int_std_string_constref (0xad9190)
