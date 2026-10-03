// FUNCTION: BF2 0x863970
#include <string>
namespace dice { namespace hfe {
extern void* dice_hfe_io_controlMapManager;
long fn_863970(long param_1) {
    if (*(int*)(param_1 + 0x30) == 1) {
        std::string s(*(const std::string*)*(void**)(param_1 + 0x38));
        *(char*)(param_1 + 0x108) = 0;
        typedef void (*Fn)(void*, const std::string*);
        Fn f = (Fn)(*(void***)dice_hfe_io_controlMapManager)[0x58/8];
        f(dice_hfe_io_controlMapManager, &s);
    }
    return 0;
}
} }
