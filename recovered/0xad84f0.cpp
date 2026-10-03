#include <sstream>
#include <string>

static int sarg0_ad84f0;
static int sarg1_ad84f0;
static int sarg2_ad84f0;

struct IssHolder_ad84f0 {
    std::istringstream ss;
    IssHolder_ad84f0(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_ad84f0() __attribute__((noinline));
};
IssHolder_ad84f0::~IssHolder_ad84f0() {}

extern "C" void sas_ad84f0(void* self, int index, const std::string& s)
{
    if (index == 1) {
        IssHolder_ad84f0 h(s);
        h.ss >> sarg0_ad84f0;
        *(void**)((char*)self + 0x38) = &sarg0_ad84f0;
        return;
    }
    if (index == 2) {
        IssHolder_ad84f0 h(s);
        h.ss >> sarg1_ad84f0;
        *(void**)((char*)self + 0x40) = &sarg1_ad84f0;
        return;
    }
    if (index == 3) {
        IssHolder_ad84f0 h(s);
        h.ss >> sarg2_ad84f0;
        *(void**)((char*)self + 0x48) = &sarg2_ad84f0;
        return;
    }
}
// REVERSED_FUNCTION: dice_hfe_animationTools_anonymous_namespace_ConsoleClass105_setArgFromString_int_std_string_constref (0xad84f0)