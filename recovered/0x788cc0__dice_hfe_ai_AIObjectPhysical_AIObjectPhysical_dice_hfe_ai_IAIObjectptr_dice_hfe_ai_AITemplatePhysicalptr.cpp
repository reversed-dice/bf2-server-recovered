// FUNCTION: BF2 0x788cc0
extern "C" void base_ctor_call(void*);
void fn_0x788cc0(void* self, void* unused1, void* templatePtr) {
    base_ctor_call(self);
    char* p = (char*)self;
    *(long*)(p+0x10) = (long)(long)templatePtr;
    *(long*)(p+0x0) = (long)(long)0xba4910;
    *(long*)(p+0x20) = (long)(long)0x0;
    *(int*)(p+0x28) = (int)(long)0xffffffff;
}
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectPhysical_AIObjectPhysical_dice_hfe_ai_IAIObjectptr_dice_hfe_ai_AITemplatePhysicalptr (0x788cc0)
