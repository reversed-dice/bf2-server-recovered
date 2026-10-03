#include <sstream>
#include <string>

static bool sarg0_ac02c0;
static bool sarg1_ac02c0;
static bool sarg2_ac02c0;

struct IssHolder_ac02c0 {
    std::istringstream ss;
    IssHolder_ac02c0(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_ac02c0() __attribute__((noinline));
};
IssHolder_ac02c0::~IssHolder_ac02c0() {}

extern "C" void sas_ac02c0(void* self, int index, const std::string& s)
{
    if (index == 1) {
        IssHolder_ac02c0 h(s);
        h.ss >> sarg0_ac02c0;
        *(void**)((char*)self + 0x38) = &sarg0_ac02c0;
        return;
    }
    if (index == 2) {
        IssHolder_ac02c0 h(s);
        h.ss >> sarg1_ac02c0;
        *(void**)((char*)self + 0x40) = &sarg1_ac02c0;
        return;
    }
    if (index == 3) {
        IssHolder_ac02c0 h(s);
        h.ss >> sarg2_ac02c0;
        *(void**)((char*)self + 0x48) = &sarg2_ac02c0;
        return;
    }
}
// REVERSED_FUNCTION: dice_hfe_tool_anonymous_namespace_ConsoleClass179_setArgFromString_int_std_string_constref (0xac02c0)