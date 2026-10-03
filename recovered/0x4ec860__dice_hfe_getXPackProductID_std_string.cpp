// FUNCTION: BF2 0x4ec860
#include <string>
extern "C" {
int compareIgnoreCase_748bb0(void*, std::string*);
extern int g_XPackGameID_b32710;
}
extern "C" int getXPackProductID_4ec860(void* param_1) {
    int r;
    {
        std::string tmp("xpack");
        r = compareIgnoreCase_748bb0(param_1, &tmp);
    }
    return (r == 0) ? g_XPackGameID_b32710 : -1;
}
// REVERSED_FUNCTION: dice_hfe_getXPackProductID_std_string (0x4ec860)
