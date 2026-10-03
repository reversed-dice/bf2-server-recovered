// FUNCTION: BF2 0x5f0950
extern "C" void base_ctor_call(void*);
void fn_0x5f0950(void* self, void* templatePtr) {
    base_ctor_call(self);
    char* p = (char*)self;
    *(long*)(p+0x60) = (long)(long)templatePtr;
    *(long*)(p+0x0) = (long)(long)0xb719f0;
    *(long*)(p+0x20) = (long)(long)0xb71b78;
    *(int*)(p+0x48) = (int)(long)0x1;
    *(long*)(p+0x50) = (long)(long)0x759dc150;
    *(int*)(p+0x58) = (int)(long)0x0;
}
// REVERSED_FUNCTION: dice_hfe_world_SimpleDeviationComp_SimpleDeviationComp_dice_hfe_world_SimpleDeviationCompTemplateptr (0x5f0950)
