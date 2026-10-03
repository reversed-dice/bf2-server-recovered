// FUNCTION: BF2 0xab2630
#include <string>
namespace dice { namespace hfe {
extern void* dice_hfe_world_objectTemplateManager;
long fn_ab2630(long param_1) {
    if (*(int*)(param_1 + 0x30) == 1) {
        std::string s(*(const std::string*)*(void**)(param_1 + 0x38));
        *(char*)(param_1 + 0x108) = 0;
        typedef void (*Fn)(void*, const std::string*);
        Fn f = (Fn)(*(void***)dice_hfe_world_objectTemplateManager)[0xf8/8];
        f(dice_hfe_world_objectTemplateManager, &s);
    }
    return 0;
}
} }
