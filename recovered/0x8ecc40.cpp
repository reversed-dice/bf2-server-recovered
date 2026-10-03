#include <sstream>
#include <string>

static int sarg0_8ecc40;
static float sarg1_8ecc40;
static float sarg2_8ecc40;

struct IssHolder_8ecc40 {
    std::istringstream ss;
    IssHolder_8ecc40(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_8ecc40() __attribute__((noinline));
};
IssHolder_8ecc40::~IssHolder_8ecc40() {}

extern "C" void sas_8ecc40(void* self, int index, const std::string& s)
{
    if (index == 1) {
        IssHolder_8ecc40 h(s);
        h.ss >> sarg0_8ecc40;
        *(void**)((char*)self + 0x38) = &sarg0_8ecc40;
        return;
    }
    if (index == 2) {
        IssHolder_8ecc40 h(s);
        h.ss >> sarg1_8ecc40;
        *(void**)((char*)self + 0x40) = &sarg1_8ecc40;
        return;
    }
    if (index == 3) {
        IssHolder_8ecc40 h(s);
        h.ss >> sarg2_8ecc40;
        *(void**)((char*)self + 0x48) = &sarg2_8ecc40;
        return;
    }
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass977_setArgFromString_int_std_string_constref (0x8ecc40)