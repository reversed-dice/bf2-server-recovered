// FUNCTION: BF2 0x745100
struct Rb0 { void erase(void*); };
struct Rb1 { void erase(void*); };
struct Rb2 { void erase(void*); };
struct Rb3 { void erase(void*); };
struct Rb4 { void erase(void*); };
struct Rb5 { void erase(void*); };
struct Rb6 { void erase(void*); };
extern "C" void dtor_745100(char* param_1) {
    *(void**)param_1 = (void*)0xb99f90;
    Rb0* t0 = (Rb0*)(param_1 + 0x160);
    t0->erase(*(void**)((char*)t0 + 0x10));
    Rb1* t1 = (Rb1*)(param_1 + 0x128);
    t1->erase(*(void**)((char*)t1 + 0x10));
    Rb2* t2 = (Rb2*)(param_1 + 0xf0);
    t2->erase(*(void**)((char*)t2 + 0x10));
    Rb3* t3 = (Rb3*)(param_1 + 0xb8);
    t3->erase(*(void**)((char*)t3 + 0x10));
    Rb4* t4 = (Rb4*)(param_1 + 0x80);
    t4->erase(*(void**)((char*)t4 + 0x10));
    Rb5* t5 = (Rb5*)(param_1 + 0x48);
    t5->erase(*(void**)((char*)t5 + 0x10));
    Rb6* t6 = (Rb6*)(param_1 + 0x10);
    t6->erase(*(void**)((char*)t6 + 0x10));
}
// REVERSED_FUNCTION: dice_hfe_SettingsRepostitory_dtor_SettingsRepostitory (0x745100)
