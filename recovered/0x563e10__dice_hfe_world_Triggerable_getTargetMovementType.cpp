// FUNCTION: BF2 0x563e10
#include <string>
extern "C" {
long getTriggerableTargetByName_563770(void*, std::string*);
extern void* dice_hfe_world_TriggerableManager_m_instance;
}

extern "C" int getTargetMovementType_563e10(long param_1) {
    void* inst = dice_hfe_world_TriggerableManager_m_instance;
    long lv;
    {
        long a = *(long*)(param_1 + 0x248);
        long b = *(long*)(a + 0x1f8);
        std::string tmp(*(const char**)(b + 0x10));
        lv = getTriggerableTargetByName_563770(inst, &tmp);
    }
    if (lv == 0) return -1;
    return *(int*)(*(long*)(lv + 0x248) + 0x204);
}
// REVERSED_FUNCTION: dice_hfe_world_Triggerable_getTargetMovementType (0x563e10)
