#include <sstream>
#include <string>

static int sarg0_8fa0d0;
static int sarg1_8fa0d0;
static bool sarg2_8fa0d0;

struct IssHolder_8fa0d0 {
    std::istringstream ss;
    IssHolder_8fa0d0(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_8fa0d0() __attribute__((noinline));
};
IssHolder_8fa0d0::~IssHolder_8fa0d0() {}

extern "C" void sas_8fa0d0(void* self, int index, const std::string& s)
{
    if (index == 1) {
        IssHolder_8fa0d0 h(s);
        h.ss >> sarg0_8fa0d0;
        *(void**)((char*)self + 0x38) = &sarg0_8fa0d0;
        return;
    }
    if (index == 2) {
        IssHolder_8fa0d0 h(s);
        h.ss >> sarg1_8fa0d0;
        *(void**)((char*)self + 0x40) = &sarg1_8fa0d0;
        return;
    }
    if (index == 3) {
        IssHolder_8fa0d0 h(s);
        h.ss >> sarg2_8fa0d0;
        *(void**)((char*)self + 0x48) = &sarg2_8fa0d0;
        return;
    }
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass1277_setArgFromString_int_std_string_constref (0x8fa0d0)