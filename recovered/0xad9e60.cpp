#include <sstream>
#include <string>

static float sarg0_ad9e60;
static float sarg1_ad9e60;
static float sarg2_ad9e60;

struct IssHolder_ad9e60 {
    std::istringstream ss;
    IssHolder_ad9e60(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_ad9e60() __attribute__((noinline));
};
IssHolder_ad9e60::~IssHolder_ad9e60() {}

extern "C" void sas_ad9e60(void* self, int index, const std::string& s)
{
    if (index == 1) {
        IssHolder_ad9e60 h(s);
        h.ss >> sarg0_ad9e60;
        *(void**)((char*)self + 0x38) = &sarg0_ad9e60;
        return;
    }
    if (index == 2) {
        IssHolder_ad9e60 h(s);
        h.ss >> sarg1_ad9e60;
        *(void**)((char*)self + 0x40) = &sarg1_ad9e60;
        return;
    }
    if (index == 3) {
        IssHolder_ad9e60 h(s);
        h.ss >> sarg2_ad9e60;
        *(void**)((char*)self + 0x48) = &sarg2_ad9e60;
        return;
    }
}
// REVERSED_FUNCTION: dice_hfe_animationTools_anonymous_namespace_ConsoleClass175_setArgFromString_int_std_string_constref (0xad9e60)