
extern "C" {
extern void dice_hfe_io_NetworkableBase_NetworkableBase(void*);
extern void* operator new(unsigned long);
}

extern "C" long create_a580c0(unsigned int param_1, void* param_2) {
    long lVar2 = 0;
    if (param_2 == 0) {
        long* plVar1 = (long*)operator new(0x88);
        dice_hfe_io_NetworkableBase_NetworkableBase(plVar1);
        char* sub = (char*)plVar1 + 0x50;
        *(void**)sub = (void*)0xb6c698;
        *(volatile long*)(sub + 0x10) = 0;
        *(volatile unsigned int*)(sub + 8) = 0xffffffff;
        *(volatile unsigned char*)(sub + 0x18) = 0;
        *(volatile unsigned int*)(sub + 0x1c) = 0xffffffff;
        *plVar1 = (long)0xb6c5f0;
        *(unsigned int*)(plVar1 + 0xe) = 1;
        plVar1[0xf] = 0;
        typedef long (*CreateFn)(void*, unsigned int);
        CreateFn fn = *(CreateFn*)((char*)(*(void**)plVar1) + 0x18);
        lVar2 = fn(plVar1, param_1);
        if (lVar2 == 0) {
            typedef void (*DtorFn)(void*);
            DtorFn dfn = *(DtorFn*)((char*)(*(void**)plVar1) + 0x10);
            dfn(plVar1);
        }
    }
    return lVar2;
}
// REVERSED_FUNCTION: dice_hfe_DestroyableWindowsBundleNetworkable_create_unsigned_int_dice_hfe_IBaseptr (0xa580c0)
