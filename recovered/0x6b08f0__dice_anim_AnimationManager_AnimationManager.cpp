namespace dice { namespace anim {
void eom_6b08f0(char* self) {
    char* p = self + 0x8;
    char* q = self + 0x10;
    *(void* volatile*)self = (void*)0xb90710;
    *(long* volatile*)(p + 0x8) = 0;
    *(long* volatile*)(p + 0x28) = 0;
    *(volatile int*)(p + 0x8) = 0;
    *(long* volatile*)(p + 0x10) = 0;
    *(char** volatile*)(p + 0x18) = (char**)q;
    *(char** volatile*)(p + 0x20) = (char**)q;
    *(long* volatile*)(self + 0x38) = 0;
    *(volatile char*)(self + 0x40) = 1;
}
} }
// REVERSED_FUNCTION: dice_anim_AnimationManager_AnimationManager (0x6b08f0)
