// FUNCTION: BF2 0x9ae680
#include <string>
namespace dice { namespace hfe {
extern unsigned dice_hfe_world_IID_IVehicleHudCompTemplate;
extern void* dice_hfe_world_getActiveTemplateComponent_unsigned_int(unsigned);
long fn_a51920(long param_1) {
    if (*(int*)(param_1 + 0x30) == 1) {
        std::string s(*(const std::string*)*(void**)(param_1 + 0x38));
        unsigned id = dice_hfe_world_IID_IVehicleHudCompTemplate;
        *(char*)(param_1 + 0x108) = 0;
        void* obj = dice_hfe_world_getActiveTemplateComponent_unsigned_int(id);
        typedef void (*Fn)(void*, const std::string*);
        Fn f = (Fn)(*(void***)obj)[0x240/8];
        f(obj, &s);
    }
    return 0;
}
} }
