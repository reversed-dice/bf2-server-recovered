// FUNCTION: BF2 0x60b520
extern "C" void base_ctor_call(void*);
void fn_0x60b520(void* self, void* templatePtr) {
    base_ctor_call(self);
    char* p = (char*)self;
    *(long*)(p+0x40) = (long)(long)templatePtr;
    *(long*)(p+0x0) = (long)(long)0xb78c70;
    *(long*)(p+0x20) = (long)(long)0xb78de0;
    *(int*)(p+0x38) = (int)(long)0x1;
    *(char*)(p+0x3c) = (char)(long)0x0;
}
// REVERSED_FUNCTION: dice_hfe_world_ThrownAnimationComp_ThrownAnimationComp_dice_hfe_world_ThrownAnimationCompTemplateptr (0x60b520)
