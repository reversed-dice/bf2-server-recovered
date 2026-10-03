
extern "C" {
extern void* dice_hfe_ConsoleObject_mDefaultStaticObjectName;
extern unsigned int dice_hfe_ConsoleObject_mDefaultAccess;
extern unsigned char dice_hfe_ConsoleObject_mDefaultCategory;
extern char dice_hfe_world_anonymous_namespace_myList;
extern void* _Znwm(unsigned long);
extern void _ZNSt15_List_node_base4hookEPS_(void*, void*);
}

extern "C" void ctor_ab21c0(char* param_1) {
    void* uVar2 = dice_hfe_ConsoleObject_mDefaultStaticObjectName;
    *(const char* volatile*)(param_1 + 0x18) = "listTemplateClasses";
    *(void* volatile*)param_1 = (void*)0xc7a6f0;
    *(void* volatile*)(param_1 + 0x110) = (void*)0xf6c6e8;
    *(volatile unsigned char*)(param_1 + 0x109) = 0;
    *(void* volatile*)(param_1 + 0x10) = uVar2;
    *(volatile unsigned int*)(param_1 + 8) = 0;
    *(unsigned int*)(param_1 + 0x20) = dice_hfe_ConsoleObject_mDefaultAccess;
    unsigned char uVar1 = dice_hfe_ConsoleObject_mDefaultCategory;
    *(unsigned int*)(param_1 + 0x28) = 0;
    *(unsigned int*)(param_1 + 0x2c) = 0;
    *(const char**)(param_1 + 0x88) = "std::string";
    *(unsigned char*)(param_1 + 0x108) = 0;
    *(unsigned char*)(param_1 + 0x24) = uVar1;
    void* lVar3 = _Znwm(0x18);
    *(char**)((char*)lVar3 + 0x10) = param_1;
    _ZNSt15_List_node_base4hookEPS_(lVar3, &dice_hfe_world_anonymous_namespace_myList);
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass355_ConsoleClass355 (0xab21c0)
