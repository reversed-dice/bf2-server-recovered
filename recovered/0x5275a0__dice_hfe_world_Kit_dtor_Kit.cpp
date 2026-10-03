// FUNCTION: BF2 0x5275a0
struct Rb0 { void erase(void*); };
struct Rb1 { void erase(void*); };
extern "C" void dice_hfe_world_Bundle_dtor_Bundle(void*);
extern "C" void dtor_5275a0(char* param_1) {
    *(void**)param_1 = (void*)0xb445f0;
    *(void**)(param_1 + 0x100) = (void*)0xb44978;
    *(void**)(param_1 + 0x238) = (void*)0xb449b0;
    Rb0* t0 = (Rb0*)(param_1 + 0x288);
    t0->erase(*(void**)((char*)t0 + 0x10));
    Rb1* t1 = (Rb1*)(param_1 + 0x258);
    t1->erase(*(void**)((char*)t1 + 0x10));
    *(void**)param_1 = (void*)0xb43730;
    *(void**)(param_1 + 0x100) = (void*)0xb43ab0;
    *(void**)(param_1 + 0x238) = (void*)0xb43ae8;
    dice_hfe_world_Bundle_dtor_Bundle(param_1);
    operator delete(param_1);
}
// REVERSED_FUNCTION: dice_hfe_world_Kit_dtor_Kit (0x5275a0)
