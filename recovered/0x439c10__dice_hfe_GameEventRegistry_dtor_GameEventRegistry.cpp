// FUNCTION: BF2 0x439c10
struct Rb0 { void erase(void*); };
struct Rb1 { void erase(void*); };
extern "C" void dtor_439c10(char* param_1) {
    *(void**)param_1 = (void*)0xb2f070;
    Rb0* t0 = (Rb0*)(param_1 + 0x40);
    t0->erase(*(void**)((char*)t0 + 0x10));
    Rb1* t1 = (Rb1*)(param_1 + 0x10);
    t1->erase(*(void**)((char*)t1 + 0x10));
}
// REVERSED_FUNCTION: dice_hfe_GameEventRegistry_dtor_GameEventRegistry (0x439c10)
