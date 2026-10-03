// FUNCTION: BF2 0x84ec50
#include <string>
namespace dice { namespace hfe {
extern void* dice_hfe_io_networkableInfoManager;
long fn_84ec50(long param_1) {
    if (*(int*)(param_1 + 0x30) == 1) {
        std::string s(*(const std::string*)*(void**)(param_1 + 0x38));
        *(char*)(param_1 + 0x108) = 0;
        typedef void (*Fn)(void*, const std::string*);
        Fn f = (Fn)(*(void***)dice_hfe_io_networkableInfoManager)[0x60/8];
        f(dice_hfe_io_networkableInfoManager, &s);
    }
    return 0;
}
} }
