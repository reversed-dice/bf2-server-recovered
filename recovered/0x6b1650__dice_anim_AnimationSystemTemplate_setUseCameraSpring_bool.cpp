// FUNCTION: BF2 0x6b1650
// BF2_FLAGS: -fno-guess-branch-probability
extern "C" void _ZdlPv(void*);
extern "C" void* _Znwm(unsigned long);
extern "C" void dice_anim_CameraSpring_CameraSpring(void*);

void dice_anim_AnimationSystemTemplate_setUseCameraSpring_bool(long param_1, char param_2) {
    if (param_2 == '\0') {
        void* old = *(void**)(param_1 + 0x18);
        if (old != 0) {
            _ZdlPv(old);
            *(long*)(param_1 + 0x18) = 0;
            return;
        }
    } else {
        if (*(long*)(param_1 + 0x18) == 0) {
            void* p = _Znwm(0x50);
            dice_anim_CameraSpring_CameraSpring(p);
            *(void**)(param_1 + 0x18) = p;
        }
    }
    return;
}
