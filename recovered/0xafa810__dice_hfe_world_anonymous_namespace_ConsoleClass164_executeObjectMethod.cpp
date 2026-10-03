// FUNCTION: BF2 0xafa810
#include <string>
namespace dice { namespace hfe {
extern void* dice_hfe_world_getActiveHeightmap();
extern void assign_str(void*, const void*);
long fn_afa810(long param_1) {
    if (*(int*)(param_1 + 0x30) == 1) {
        std::string s(*(const std::string*)*(void**)(param_1 + 0x38));
        *(char*)(param_1 + 0x108) = 0;
        void* obj = dice_hfe_world_getActiveHeightmap();
        typedef void (*Fn)(void*, const std::string*);
        Fn f = (Fn)(*(void***)obj)[0x30/8];
        f(obj, &s);
    }
    return 0;
}
} }
