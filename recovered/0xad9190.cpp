#include <sstream>
#include <string>

static int sarg0_ad9190;
static int sarg1_ad9190;
static float sarg2_ad9190;

struct IssHolder_ad9190 {
    std::istringstream ss;
    IssHolder_ad9190(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_ad9190() __attribute__((noinline));
};
IssHolder_ad9190::~IssHolder_ad9190() {}

extern "C" void sas_ad9190(void* self, int index, const std::string& s)
{
    if (index == 1) {
        IssHolder_ad9190 h(s);
        h.ss >> sarg0_ad9190;
        *(void**)((char*)self + 0x38) = &sarg0_ad9190;
        return;
    }
    if (index == 2) {
        IssHolder_ad9190 h(s);
        h.ss >> sarg1_ad9190;
        *(void**)((char*)self + 0x40) = &sarg1_ad9190;
        return;
    }
    if (index == 3) {
        IssHolder_ad9190 h(s);
        h.ss >> sarg2_ad9190;
        *(void**)((char*)self + 0x48) = &sarg2_ad9190;
        return;
    }
}
// REVERSED_FUNCTION: dice_hfe_animationTools_anonymous_namespace_ConsoleClass117_setArgFromString_int_std_string_constref (0xad9190)