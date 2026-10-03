// FUNCTION: BF2 0x95e290
#include <string>
namespace dice { namespace hfe {

extern void* dice_hfe_world_getActiveTemplate_unsigned_int(unsigned int);
extern const std::string* dice_hfe_world_AntennaObjectTemplate_getSkeleton_const(void*);
extern void dice_hfe_world_AntennaObjectTemplate_setSkeleton_std_string_constref(void*, const std::string&);

void* eom_95e290(char* self) {
    // One read: the target keeps the mode in one register and tests the second
    // case with DEC/JZ.
    int mode = *(int*)(self + 0x30);
    if (mode == 0) {
        *(unsigned char*)(self + 0x108) = 1;
        // Name the source before the destination, otherwise the destination's
        // LEA is emitted a slot early and the prologue shifts base register.
        const std::string* src = dice_hfe_world_AntennaObjectTemplate_getSkeleton_const(dice_hfe_world_getActiveTemplate_unsigned_int(*(unsigned int*)0x00c7cf70));
        std::string* d = (std::string*)(self + 0x110);
        d->assign(*src);
        return (void*)d;
    }
    if (mode == 1) {
        std::string tmp(*(const std::string*)*(void**)(self + 0x38));
        // The class id is read before the flag store, as the target does.
        unsigned int cid = *(unsigned int*)0x00c7cf70;
        *(unsigned char*)(self + 0x108) = 0;
        dice_hfe_world_AntennaObjectTemplate_setSkeleton_std_string_constref(dice_hfe_world_getActiveTemplate_unsigned_int(cid), tmp);
    }
    return 0;
}
} }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass298_executeObjectMethod (0x95e290)
