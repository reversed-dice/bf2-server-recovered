#include <sstream>
#include <string>

static float sarg0_8d9710;
static float sarg1_8d9710;
static float sarg2_8d9710;

struct IssHolder_8d9710 {
    std::istringstream ss;
    IssHolder_8d9710(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_8d9710() __attribute__((noinline));
};
IssHolder_8d9710::~IssHolder_8d9710() {}

extern "C" void sas_8d9710(void* self, int index, const std::string& s)
{
    if (index == 1) {
        IssHolder_8d9710 h(s);
        h.ss >> sarg0_8d9710;
        *(void**)((char*)self + 0x38) = &sarg0_8d9710;
        return;
    }
    if (index == 2) {
        IssHolder_8d9710 h(s);
        h.ss >> sarg1_8d9710;
        *(void**)((char*)self + 0x40) = &sarg1_8d9710;
        return;
    }
    if (index == 3) {
        IssHolder_8d9710 h(s);
        h.ss >> sarg2_8d9710;
        *(void**)((char*)self + 0x48) = &sarg2_8d9710;
        return;
    }
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass436_setArgFromString_int_std_string_constref (0x8d9710)