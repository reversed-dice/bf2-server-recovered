// FUNCTION: BF2 0x78f730
extern "C" void base_ctor_call(void*);
void fn_0x78f730(void* self, void* arg1, int arg2, void* arg3, void* arg4) {
    base_ctor_call(self);
    char* p = (char*)self;
    *(long*)(p+0x78) = (long)arg4;
    *(long*)(p+0x0) = 0xba60b0;
    *(int*)(p+0x70) = 1;
}
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectSecondaryReal_AIObjectSecondaryReal_dice_hfe_ai_AITemplateptr_int_dice_hfe_world_IObjectptr_dice_hfe_ai_IAIObjectptr (0x78f730)
