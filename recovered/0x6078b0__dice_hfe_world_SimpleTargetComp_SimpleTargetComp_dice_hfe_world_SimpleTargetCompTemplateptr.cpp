// FUNCTION: BF2 0x6078b0
extern "C" void base_ctor_call(void*);
void fn_0x6078b0(void* self, void* templatePtr) {
    base_ctor_call(self);
    char* p = (char*)self;
    *(long*)(p+0x88) = (long)(long)templatePtr;
    *(long*)(p+0x0) = (long)(long)0xb771d0;
    *(long*)(p+0x20) = (long)(long)0xb773b0;
    *(int*)(p+0x80) = (int)(long)0x1;
}
// REVERSED_FUNCTION: dice_hfe_world_SimpleTargetComp_SimpleTargetComp_dice_hfe_world_SimpleTargetCompTemplateptr (0x6078b0)
