#include <sstream>
#include <cstring>
#include <string>

extern "C" void dice_hfe_world_operator_std_istreamref_dice_hfe_world_IObjectTemplate_ptrproxyref(std::istringstream*, void*);

struct WPtr_ac3ef0 { void* p; WPtr_ac3ef0() : p(0) {} };

struct IssHolder_ac3ef0 {
    std::istringstream ss;
    IssHolder_ac3ef0(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_ac3ef0() __attribute__((noinline));
};
IssHolder_ac3ef0::~IssHolder_ac3ef0() {}

void setArgFromString_ac3ef0(void* self, int index, const std::string& s)
{
    if (index == 1) {
        static std::string arg;
        IssHolder_ac3ef0 h0(s);
        h0.ss >> arg;
        *(void**)((char*)self + 0x38) = &arg;
    }
    else if (index == 2) {
        static WPtr_ac3ef0 arg;
        IssHolder_ac3ef0 h1(s);
        dice_hfe_world_operator_std_istreamref_dice_hfe_world_IObjectTemplate_ptrproxyref(&h1.ss, &arg);
        *(void**)((char*)self + 0x40) = &arg;
    }
}
// REVERSED_FUNCTION: dice_hfe_tool_anonymous_namespace_ConsoleClass151_setArgFromString_int_std_string_constref (0xac3ef0)