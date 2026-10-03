// FUNCTION: BF2 0x6b3790
#include <string>
extern "C" long TriggerManager_getTriggerByName_6d0220(void*, std::string*, int);

extern "C" void AnimationSystem_init_6b3790(char* param_1) {
    *(unsigned char*)(param_1 + 0xa0) = 0;
    std::string tmp("postRoot");
    long r = TriggerManager_getTriggerByName_6d0220(*(void**)(*(long*)(param_1 + 0x50) + 8), &tmp, 1);
    *(long*)(param_1 + 0x68) = r;
}
// REVERSED_FUNCTION: dice_anim_AnimationSystem_init (0x6b3790)
