// FUNCTION: BF2 0x6b4890
extern "C" void real_0x6b4700(void* self);

namespace dice { namespace anim {
void fn_0x6b4890(void* self) {
    if (*(char*)self != 0) real_0x6b4700(self);
}
} }
// REVERSED_FUNCTION: dice_anim_BoneAnimation_dtor_BoneAnimation (0x6b4890)
