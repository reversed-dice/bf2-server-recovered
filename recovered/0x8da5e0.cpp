#include <sstream>
#include <string>

static float sarg0_8da5e0;
static float sarg1_8da5e0;
static float sarg2_8da5e0;

struct IssHolder_8da5e0 {
    std::istringstream ss;
    IssHolder_8da5e0(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_8da5e0() __attribute__((noinline));
};
IssHolder_8da5e0::~IssHolder_8da5e0() {}

extern "C" void sas_8da5e0(void* self, int index, const std::string& s)
{
    if (index == 1) {
        IssHolder_8da5e0 h(s);
        h.ss >> sarg0_8da5e0;
        *(void**)((char*)self + 0x38) = &sarg0_8da5e0;
        return;
    }
    if (index == 2) {
        IssHolder_8da5e0 h(s);
        h.ss >> sarg1_8da5e0;
        *(void**)((char*)self + 0x40) = &sarg1_8da5e0;
        return;
    }
    if (index == 3) {
        IssHolder_8da5e0 h(s);
        h.ss >> sarg2_8da5e0;
        *(void**)((char*)self + 0x48) = &sarg2_8da5e0;
        return;
    }
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass451_setArgFromString_int_std_string_constref (0x8da5e0)