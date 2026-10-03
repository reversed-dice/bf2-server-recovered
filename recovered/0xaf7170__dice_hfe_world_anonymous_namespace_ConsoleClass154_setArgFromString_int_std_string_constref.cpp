// FUNCTION: BF2 0xaf7170
#include <sstream>
#include <string>


static int arg0_af7170;
static float arg1_af7170;
static float arg2_af7170;

// GCC 4.0.3 emits basic_istringstream's constructor out of line (extern
// template, bits/sstream.tcc:225) but inlines its destructor, whereas these
// targets call both. A holder whose own destructor is noinline restores the
// single `CALL ~basic_istringstream` per branch.
struct Iss_af7170 {
    std::istringstream ss;
    Iss_af7170(const std::string& s) : ss(s, std::ios_base::in) {}
    ~Iss_af7170() __attribute__((noinline));
};
Iss_af7170::~Iss_af7170() {}

void setArgFromString_af7170(void* self, int index, const std::string& s)
{
    if (index == 1) {
        Iss_af7170 h(s);
        h.ss >> arg0_af7170;
        *(void**)((char*)self + 0x38) = &arg0_af7170;
        return;
    }
    if (index == 2) {
        Iss_af7170 h(s);
        h.ss >> arg1_af7170;
        *(void**)((char*)self + 0x40) = &arg1_af7170;
        return;
    }
    if (index == 3) {
        Iss_af7170 h(s);
        h.ss >> arg2_af7170;
        *(void**)((char*)self + 0x48) = &arg2_af7170;
        return;
    }
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass154_setArgFromString_int_std_string_constref (0xaf7170)
