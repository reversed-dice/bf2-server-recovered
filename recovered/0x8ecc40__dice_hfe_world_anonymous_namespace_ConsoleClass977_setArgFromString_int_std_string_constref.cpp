// FUNCTION: BF2 0x8ecc40
#include <sstream>
#include <string>


static int arg0_8ecc40;
static float arg1_8ecc40;
static float arg2_8ecc40;

// GCC 4.0.3 emits basic_istringstream's constructor out of line (extern
// template, bits/sstream.tcc:225) but inlines its destructor, whereas these
// targets call both. A holder whose own destructor is noinline restores the
// single `CALL ~basic_istringstream` per branch.
struct Iss_8ecc40 {
    std::istringstream ss;
    Iss_8ecc40(const std::string& s) : ss(s, std::ios_base::in) {}
    ~Iss_8ecc40() __attribute__((noinline));
};
Iss_8ecc40::~Iss_8ecc40() {}

void setArgFromString_8ecc40(void* self, int index, const std::string& s)
{
    if (index == 1) {
        Iss_8ecc40 h(s);
        h.ss >> arg0_8ecc40;
        *(void**)((char*)self + 0x38) = &arg0_8ecc40;
        return;
    }
    if (index == 2) {
        Iss_8ecc40 h(s);
        h.ss >> arg1_8ecc40;
        *(void**)((char*)self + 0x40) = &arg1_8ecc40;
        return;
    }
    if (index == 3) {
        Iss_8ecc40 h(s);
        h.ss >> arg2_8ecc40;
        *(void**)((char*)self + 0x48) = &arg2_8ecc40;
        return;
    }
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass977_setArgFromString_int_std_string_constref (0x8ecc40)
