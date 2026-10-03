// FUNCTION: BF2 0x87a2c0
#include <sstream>
#include <string>


static unsigned int arg0_87a2c0;
static unsigned int arg1_87a2c0;
static unsigned int arg2_87a2c0;

// GCC 4.0.3 emits basic_istringstream's constructor out of line (extern
// template, bits/sstream.tcc:225) but inlines its destructor, whereas these
// targets call both. A holder whose own destructor is noinline restores the
// single `CALL ~basic_istringstream` per branch.
struct Iss_87a2c0 {
    std::istringstream ss;
    Iss_87a2c0(const std::string& s) : ss(s, std::ios_base::in) {}
    ~Iss_87a2c0() __attribute__((noinline));
};
Iss_87a2c0::~Iss_87a2c0() {}

void setArgFromString_87a2c0(void* self, int index, const std::string& s)
{
    if (index == 1) {
        Iss_87a2c0 h(s);
        h.ss >> arg0_87a2c0;
        *(void**)((char*)self + 0x38) = &arg0_87a2c0;
        return;
    }
    if (index == 2) {
        Iss_87a2c0 h(s);
        h.ss >> arg1_87a2c0;
        *(void**)((char*)self + 0x40) = &arg1_87a2c0;
        return;
    }
    if (index == 3) {
        Iss_87a2c0 h(s);
        h.ss >> arg2_87a2c0;
        *(void**)((char*)self + 0x48) = &arg2_87a2c0;
        return;
    }
}
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass206_setArgFromString_int_std_string_constref (0x87a2c0)
