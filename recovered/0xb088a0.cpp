#include <sstream>
#include <cstring>
#include <string>

extern "C" void dice_hfe_ai_operator_std_istreamref_dice_hfe_KitTyperef(std::istringstream*, void*);


struct IssHolder_b088a0 {
    std::istringstream ss;
    IssHolder_b088a0(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_b088a0() __attribute__((noinline));
};
IssHolder_b088a0::~IssHolder_b088a0() {}

void setArgFromString_b088a0(void* self, int index, const std::string& s)
{
    if (index == 1) {
        static std::string arg;
        IssHolder_b088a0 h0(s);
        h0.ss >> arg;
        *(void**)((char*)self + 0x38) = &arg;
    }
    else if (index == 2) {
        static void* s1_b088a0;
        IssHolder_b088a0 h1(s);
        dice_hfe_ai_operator_std_istreamref_dice_hfe_KitTyperef(&h1.ss, &s1_b088a0);
        *(void**)((char*)self + 0x40) = &s1_b088a0;
    }
}
// REVERSED_FUNCTION: dice_hfe_ai_anonymous_namespace_ConsoleClass251_setArgFromString_int_std_string_constref (0xb088a0)