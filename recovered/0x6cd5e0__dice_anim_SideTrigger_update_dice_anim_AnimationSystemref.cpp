// FUNCTION: BF2 0x6cd5e0
#include <math.h>
extern "C" {
    unsigned int dice_anim_Trigger_update_dice_anim_AnimationSystemref(void*, void*);
}

namespace dice { namespace anim {

struct SideTrigger {
    void* vtable;
    unsigned char _pad[0x48];
    char m_flag1;    // 0x50
    char m_flag2;    // 0x51
};

extern "C" unsigned char update_6cd5e0(SideTrigger* self, char* animSystem) {
    float val;
    if (self->m_flag1 != '\0') {
        val = *(float*)(animSystem + 0x28);
    } else {
        val = *(float*)(animSystem + 0x18) * *(float*)(animSystem + 0x24);
    }
    if (self->m_flag2 != '\0') {
        val = fabsf(val);
    }
    typedef unsigned char (*Vfn)(float, void*);
    Vfn fn = (Vfn)(*(void***)self)[0xe0/8];
    unsigned char result = fn(val, self);
    if (result != '\0') {
        return dice_anim_Trigger_update_dice_anim_AnimationSystemref(self, animSystem);
    }
    return 1;
}

} }
