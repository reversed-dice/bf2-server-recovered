// FUNCTION: BF2 0x61fdd0
extern "C" void base_ctor_call(void*);
void fn_0x61fdd0(void* self, void* templatePtr) {
    base_ctor_call(self);
    char* p = (char*)self;
    *(long*)(p+0x70) = (long)(long)templatePtr;
    *(long*)(p+0x0) = (long)(long)0xb7d970;
    *(long*)(p+0x20) = (long)(long)0xb7db78;
    *(int*)(p+0x58) = (int)(long)0x1;
    *(long*)(p+0x60) = (long)(long)0x0;
    *(int*)(p+0x68) = (int)(long)0x0;
}
// REVERSED_FUNCTION: dice_hfe_world_ReplenishDetonationComp_ReplenishDetonationComp_dice_hfe_world_ReplenishDetonationCompTemplateptr (0x61fdd0)
