// FUNCTION: BF2 0x764650
// BF2_FLAGS: -fno-strict-aliasing
#include <string>

extern "C" void* fn_0x0058c9a0(void* tpl, std::string const& name, void* obj);

typedef void (*VFnOne)(void* self, void* arg);
typedef void (*VFnTwo)(void* self, int a, void* b);

struct SoldierSoundLayout {
    void* m_vptr;        // 0x00
    void* m_soldier;     // 0x08
    void* m_sounds[9];   // 0x10 .. 0x57
    int m_58;            // 0x58
    int m_flag;          // 0x5c
    char m_60;           // 0x60
    char m_61;           // 0x61
};

struct SoldierLayout {
    char _pad[0x28];
    void* m_template;    // 0x28
};

extern "C" void f_764390(SoldierSoundLayout* s, void* soldier)
{
    s->m_vptr = (void*)0xba0950;
    s->m_soldier = soldier;
    s->m_58 = -1;
    s->m_flag = 0;
    s->m_60 = 1;
    s->m_61 = 0;
    for (int i = 0; i < 9; ++i)
        s->m_sounds[i] = 0;

    void* tpl = ((SoldierLayout*)soldier)->m_template;

    s->m_sounds[4] = fn_0x0058c9a0(tpl, "Death", soldier);
    if (s->m_sounds[4] != 0) {
        ((VFnOne)(*(void***)s->m_sounds[4])[0x78 / 8])(s->m_sounds[4], s);
        ((VFnTwo)(*(void***)s->m_sounds[4])[0x88 / 8])(s->m_sounds[4], 0, &s->m_flag);
        ((VFnTwo)(*(void***)s->m_sounds[4])[0x98 / 8])(s->m_sounds[4], 0, &s->m_flag);
    }

    s->m_sounds[5] = fn_0x0058c9a0(tpl, "Revive", soldier);
    if (s->m_sounds[5] != 0)
        ((VFnOne)(*(void***)s->m_sounds[5])[0x78 / 8])(s->m_sounds[5], s);

    s->m_sounds[6] = fn_0x0058c9a0(tpl, "Swim", soldier);
    if (s->m_sounds[6] != 0)
        ((VFnOne)(*(void***)s->m_sounds[6])[0x78 / 8])(s->m_sounds[6], s);

    s->m_sounds[7] = fn_0x0058c9a0(tpl, "Swim_Sprint", soldier);
    if (s->m_sounds[7] != 0)
        ((VFnOne)(*(void***)s->m_sounds[7])[0x78 / 8])(s->m_sounds[7], s);

    s->m_sounds[8] = fn_0x0058c9a0(tpl, "Swim_Still", soldier);
    if (s->m_sounds[8] != 0)
        ((VFnOne)(*(void***)s->m_sounds[8])[0x78 / 8])(s->m_sounds[8], s);
}
