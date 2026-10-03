// FUNCTION: BF2 0x745080
struct RbA { void erase(void*); };
struct RbB { void erase(void*); };
struct RbC { void erase(void*); };
struct RbD { void erase(void*); };
struct RbE { void erase(void*); };
struct RbF { void erase(void*); };
struct RbG { void erase(void*); };
extern "C" void dtor_745080(char* param_1) {
    *(void**)param_1 = (void*)0xb99f90;
    RbA* a = (RbA*)(param_1 + 0x160);
    a->erase(*(void**)((char*)a + 0x10));
    RbB* b = (RbB*)(param_1 + 0x128);
    b->erase(*(void**)((char*)b + 0x10));
    RbC* c = (RbC*)(param_1 + 0xf0);
    c->erase(*(void**)((char*)c + 0x10));
    RbD* d = (RbD*)(param_1 + 0xb8);
    d->erase(*(void**)((char*)d + 0x10));
    RbE* e = (RbE*)(param_1 + 0x80);
    e->erase(*(void**)((char*)e + 0x10));
    RbF* f = (RbF*)(param_1 + 0x48);
    f->erase(*(void**)((char*)f + 0x10));
    RbG* g = (RbG*)(param_1 + 0x10);
    g->erase(*(void**)((char*)g + 0x10));
}
// REVERSED_FUNCTION: dice_hfe_SettingsRepostitory_dtor_SettingsRepostitory (0x745080)
