// FUNCTION: BF2 0x942130
#include <sstream>
#include <string>

struct ArgT0 { int v; };
std::istream& operator>>(std::istream&, ArgT0&);
struct ArgT1 { int v; };
std::istream& operator>>(std::istream&, ArgT1&);
static ArgT0 arg0_942130;
static ArgT1 arg1_942130;
static float arg2_942130;

// GCC 4.0.3 emits basic_istringstream's constructor out of line (extern
// template, bits/sstream.tcc:225) but inlines its destructor, whereas these
// targets call both. A holder whose own destructor is noinline restores the
// single `CALL ~basic_istringstream` per branch.
struct Iss_942130 {
    std::istringstream ss;
    Iss_942130(const std::string& s) : ss(s, std::ios_base::in) {}
    ~Iss_942130() __attribute__((noinline));
};
Iss_942130::~Iss_942130() {}

void setArgFromString_942130(void* self, int index, const std::string& s)
{
    if (index == 1) {
        Iss_942130 h(s);
        h.ss >> arg0_942130;
        *(void**)((char*)self + 0x38) = &arg0_942130;
        return;
    }
    if (index == 2) {
        Iss_942130 h(s);
        h.ss >> arg1_942130;
        *(void**)((char*)self + 0x40) = &arg1_942130;
        return;
    }
    if (index == 3) {
        Iss_942130 h(s);
        h.ss >> arg2_942130;
        *(void**)((char*)self + 0x48) = &arg2_942130;
        return;
    }
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass368_setArgFromString_int_std_string_constref (0x942130)
