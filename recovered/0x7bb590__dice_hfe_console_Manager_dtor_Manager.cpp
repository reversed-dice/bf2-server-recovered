// FUNCTION: BF2 0x7bb590
struct Rb0 { void erase(void*); };
struct Rb1 { void erase(void*); };
struct Rb2 { void erase(void*); };
extern "C" void dtor_7bb590(char* param_1) {
    Rb0* t0 = (Rb0*)(param_1 + 0x78);
    t0->erase(*(void**)((char*)t0 + 0x10));
    Rb1* t1 = (Rb1*)(param_1 + 0x48);
    t1->erase(*(void**)((char*)t1 + 0x10));
    Rb2* t2 = (Rb2*)(param_1 + 0x18);
    t2->erase(*(void**)((char*)t2 + 0x10));
    void* p = *(void**)param_1;
    if (p != 0) {
        operator delete(p);
    }
}
// REVERSED_FUNCTION: dice_hfe_console_Manager_dtor_Manager (0x7bb590)
