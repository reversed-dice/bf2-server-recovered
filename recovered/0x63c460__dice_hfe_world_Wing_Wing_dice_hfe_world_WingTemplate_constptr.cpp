// FUNCTION: BF2 0x63c460
extern "C" void base_ctor_call(void*);
void fn_0x63c460(void* self, void* templatePtr) {
    base_ctor_call(self);
    char* p = (char*)self;
    *(long*)(p+0x2c0) = (long)(long)templatePtr;
    *(long*)(p+0x0) = (long)(long)0xb861b0;
    *(long*)(p+0x100) = (long)(long)0xb86500;
    *(long*)(p+0x238) = (long)(long)0xb86538;
    *(int*)(p+0x2c8) = (int)(long)0x0;
}
// REVERSED_FUNCTION: dice_hfe_world_Wing_Wing_dice_hfe_world_WingTemplate_constptr (0x63c460)
