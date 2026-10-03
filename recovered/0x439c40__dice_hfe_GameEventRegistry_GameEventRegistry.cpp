extern "C" void ctor_439c40(char* param_1) {
    char* obj1 = param_1 + 0x10;
    char* obj1_self = param_1 + 0x18;
    *(void**)(param_1) = (void*)0xb2f070;
    *(unsigned int*)(param_1 + 0x8) = 1;
    *(volatile unsigned long*)(obj1 + 0x8) = 0;
    *(void**)(obj1 + 0x18) = obj1_self;
    *(unsigned int*)(obj1 + 0x8) = 0;
    *(void**)(obj1 + 0x20) = obj1_self;
    char* obj2_self = param_1 + 0x48;
    *(unsigned long*)(obj1 + 0x28) = 0;
    *(unsigned long*)(obj1 + 0x10) = 0;
    char* obj2 = param_1 + 0x40;
    *(volatile unsigned long*)(obj2 + 0x8) = 0;
    *(volatile unsigned long*)(obj2 + 0x28) = 0;
    *(volatile unsigned int*)(obj2 + 0x8) = 0;
    *(volatile unsigned long*)(obj2 + 0x10) = 0;
    *(void* volatile*)(obj2 + 0x18) = obj2_self;
    *(void* volatile*)(obj2 + 0x20) = obj2_self;
    *(volatile unsigned int*)(param_1 + 0x70) = 0;
}
// REVERSED_FUNCTION: dice_hfe_GameEventRegistry_GameEventRegistry (0x439c40)
