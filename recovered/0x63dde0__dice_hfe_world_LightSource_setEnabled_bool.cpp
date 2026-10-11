// FUNCTION: BF2 0x63dde0
namespace dice { namespace hfe { namespace world {

struct LS {
    char pad0[0x218];
    void* m_obj;
    char pad1[0x26c - 0x220];
    bool m_on;
    char pad2[0x478 - 0x26d];
    void* m_p478;
};

typedef int (*FnInt)(void*);
typedef float (*FnFloat)(void*);
typedef void (*FnC0)(void*, int, int);
typedef void (*FnTwo)(void*, void*);

void LightSource_setEnabled(void* self, bool on)
{
    LS* s = (LS*)self;
    if (s->m_on == on)
        return;
    if (on) {
        void* o = s->m_obj;
        int big = ((FnInt)(*(void***)o)[0x290 / 8])(o);
        if (big == 0)
            big = ((FnFloat)(*(void***)o)[0x3f0 / 8])(o) > 0.0f;
        if (big != 0)
            ((FnC0)(*(void***)self)[0xc0 / 8])(self, 0x2000, 1);
        else
            ((FnC0)(*(void***)self)[0xc0 / 8])(self, 0, 1);
        if (s->m_p478)
            ((FnTwo)(*(void***)s->m_p478)[0x128 / 8])(s->m_p478, self);
    } else {
        ((FnC0)(*(void***)self)[0xc0 / 8])(self, 1, 0x2000);
        if (s->m_p478)
            ((FnTwo)(*(void***)s->m_p478)[0x130 / 8])(s->m_p478, self);
    }
    s->m_on = on;
}

} } }
