#include <sstream>
#include <string>

extern "C" void dice_hfe_world_operator_std_istreamref_dice_hfe_world_IObjectTemplate_ptrproxyref(std::istringstream*, void*);

struct WPtr_8a3bc0 { void* p; WPtr_8a3bc0() : p(0) {} };

struct IssHolder_8a3bc0 {
    std::istringstream ss;
    IssHolder_8a3bc0(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_8a3bc0() __attribute__((noinline));
};
IssHolder_8a3bc0::~IssHolder_8a3bc0() {}

void setArgFromString_8a3bc0(void* self, int index, const std::string& s)
{
    if (index == 1) {
        static unsigned int s0_8a3bc0;
        IssHolder_8a3bc0 h0(s);
        h0.ss >> s0_8a3bc0;
        *(void**)((char*)self + 0x38) = &s0_8a3bc0;
    }
    else if (index == 2) {
        static WPtr_8a3bc0 arg;
        IssHolder_8a3bc0 h1(s);
        dice_hfe_world_operator_std_istreamref_dice_hfe_world_IObjectTemplate_ptrproxyref(&h1.ss, &arg);
        *(void**)((char*)self + 0x40) = &arg;
    }
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass61_setArgFromString_int_std_string_constref (0x8a3bc0)