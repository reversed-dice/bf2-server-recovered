extern "C" void SupplyDropManager_reset_55c810(void);

extern "C" void ctor_55c870(char* param_1) {
    char* obj = param_1 + 8;
    char* self = param_1 + 0x10;
    *(void**)param_1 = (void*)0xb50830;
    *(volatile unsigned long*)(obj+8) = 0;
    *(unsigned long*)(obj+0x28) = 0;
    *(unsigned int*)(obj+8) = 0;
    *(unsigned long*)(obj+0x10) = 0;
    *(void**)(obj+0x18) = self;
    *(void**)(obj+0x20) = self;
    SupplyDropManager_reset_55c810();
}
// REVERSED_FUNCTION: dice_hfe_world_SupplyDropManager_SupplyDropManager (0x55c870)
