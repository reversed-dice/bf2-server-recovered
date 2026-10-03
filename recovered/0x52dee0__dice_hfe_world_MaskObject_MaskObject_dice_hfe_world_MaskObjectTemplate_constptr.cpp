// FUNCTION: BF2 0x52dee0
extern "C" void base_ctor_call(void*);
void fn_0x52dee0(void* self, void* templatePtr) {
    base_ctor_call(self);
    char* p = (char*)self;
    *(long*)(p+0x268) = (long)(long)templatePtr;
    *(long*)(p+0x0) = (long)(long)0xb47410;
    *(long*)(p+0x100) = (long)(long)0xb47748;
    *(long*)(p+0x238) = (long)(long)0xb47780;
    *(char*)(p+0x270) = (char)(long)0x0;
}
// REVERSED_FUNCTION: dice_hfe_world_MaskObject_MaskObject_dice_hfe_world_MaskObjectTemplate_constptr (0x52dee0)
