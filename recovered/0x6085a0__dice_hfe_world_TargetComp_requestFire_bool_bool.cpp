// FUNCTION: BF2 0x6085a0
extern "C" unsigned int dice_hfe_WorldPref_getTickCount();
extern "C" int IID_IPlayerControlObject;
extern "C" int IID_IObject;
extern unsigned int CID_PlayerControlObjectTemplate;
extern "C" bool dice_hfe_world_GenericFireArm_busy_bool(void*, bool);

struct Weapon {
    char pad0[0x38];
    char m_state;
};

struct TargetComp {
    char pad0[0x18];
    void* m_p18;
    char pad20[0x18];
    void* m_p38;
    int m_tick40;
    char pad44[0xc];
    char m_b50;
    char pad51[0x27];
    Weapon* m_p78;
};

bool fn_0x6085a0(void* self, bool a, bool b)
{
    TargetComp* p = (TargetComp*)self;
    (void)b;
    if (a) return true;
    if (p->m_p38 == 0) return true;
    int tick = p->m_tick40;
    if (tick == (int)dice_hfe_WorldPref_getTickCount()) return true;
    Weapon* wp = p->m_p78;
    if (wp->m_state != p->m_b50) return true;

    typedef void* (*FnV)(void*);
    typedef void* (*FnVi)(void*, int);
    typedef unsigned (*FnU)(void*);
    typedef void (*FnVV)(void*, void*);
    typedef void (*FnVf)(void*, float, unsigned);
    typedef void (*FnV3)(void*, int, void*, int);

    void* pl = ((FnV*)(*(void***)p->m_p18))[0x380 / 8](p->m_p18);
    if (pl == 0) return true;
    void* w = ((FnV*)(*(void***)pl))[0x90 / 8](pl);
    if (w == 0) return true;
    void* tmpl = *(void**)((char*)w + 0x28);
    if (((FnU*)(*(void***)tmpl))[0x20 / 8](tmpl) != CID_PlayerControlObjectTemplate) return true;

    void* itf = 0;
    do {
        itf = ((FnVi*)(*(void***)w))[0x18 / 8](w, IID_IPlayerControlObject);
        if (itf != 0) break;
        w = *(void**)((char*)w + 0x50);
    } while (w != 0);

    void* obj = ((FnVi*)(*(void***)p->m_p38))[0x18 / 8](p->m_p38, IID_IObject);
    ((FnV*)(*(void***)obj))[0x520 / 8](obj);
    ((FnVf*)(*(void***)obj))[0x160 / 8](obj, 0.0f, 0);
    ((FnV*)(*(void***)obj))[0x528 / 8](obj);
    if (dice_hfe_world_GenericFireArm_busy_bool(obj, false)) return false;

    p->m_tick40 = (int)dice_hfe_WorldPref_getTickCount();
    FnVV fire = ((FnVV*)(*(void***)itf))[0xf8 / 8];
    void* o = ((FnVi*)(*(void***)p->m_p38))[0x18 / 8](p->m_p38, IID_IObject);
    fire(itf, o);
    FnV3 msg = ((FnV3*)(*(void***)obj))[0x208 / 8];
    void* pl2 = ((FnV*)(*(void***)p->m_p18))[0x380 / 8](p->m_p18);
    msg(obj, 7, pl2, 0);
    return false;
}
