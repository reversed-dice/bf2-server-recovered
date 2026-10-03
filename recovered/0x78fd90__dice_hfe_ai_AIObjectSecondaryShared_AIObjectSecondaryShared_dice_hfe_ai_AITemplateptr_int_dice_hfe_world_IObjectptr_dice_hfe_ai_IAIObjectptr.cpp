// FUNCTION: BF2 0x78fd90
extern "C" void base_ctor_call(void*);
void fn_0x78fd90(void* self, void* arg1, int arg2, void* arg3, void* arg4) {
    base_ctor_call(self);
    char* p = (char*)self;
    *(long*)(p+0x70) = (long)arg4;
    *(long*)(p+0x0) = 0xba63d0;
    *(int*)(p+0x68) = 1;
}
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectSecondaryShared_AIObjectSecondaryShared_dice_hfe_ai_AITemplateptr_int_dice_hfe_world_IObjectptr_dice_hfe_ai_IAIObjectptr (0x78fd90)
