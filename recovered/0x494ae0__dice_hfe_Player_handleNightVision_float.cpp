// FUNCTION: BF2 0x494ae0
// BF2_FLAGS: -fno-tree-pre
namespace dice { namespace hfe {

extern "C" void* fn_407508(unsigned long);
extern "C" void fn_42f2c0(void* ev, int a, int b);

typedef double (*FnD)(void*);
typedef bool   (*FnB)(void*);
typedef void   (*FnVV)(void*, int, int);
typedef int    (*FnI)(void*);
typedef void*  (*FnP)(void*);
typedef void   (*FnGameEv)(void*, void*);

struct Player {
    char _p0[0x444];
    float m_444;
    char _p1[0xc];
    float m_454;
    char _p2[0x4];
    float m_45c;
};

void f_494ae0(Player* self, float dt)
{
    double now = ((FnD)(*(void***)*(void**)0x010aa1a8)[0x30 / 8])(*(void**)0x010aa1a8);
    if (__builtin_expect(now - (double)self->m_454 >= *(double*)0x00b27148, 1)) {
        self->m_454 = (float)((FnD)(*(void***)*(void**)0x010aa1a8)[0x30 / 8])(*(void**)0x010aa1a8);
    }
    if (self->m_45c <= 0.0f) {
        if (((FnB)(*(void***)self)[0x5d0 / 8])(self)) {
            ((FnVV)(*(void***)self)[0x5b8 / 8])(self, 0, 0);
            if (!((FnB)(*(void***)*(void**)0x010b8c08)[0x278 / 8])(*(void**)0x010b8c08)) {
                if (self == ((FnP)(*(void***)*(void**)0x0112ee38)[0x60 / 8])(*(void**)0x0112ee38)) {
                    FnGameEv fe = (FnGameEv)(*(void***)*(void**)0x010c5420)[0x108 / 8];
                    int y = ((FnI)(*(void***)self)[0xa8 / 8])(self);
                    void* ev = fn_407508(0x18);
                    fn_42f2c0(ev, y, 0);
                    fe(*(void**)0x010c5420, ev);
                }
            }
        }
        self->m_45c = 0.0f;
    }
    if (0.0f < self->m_444) {
        self->m_444 -= dt;
    }
}

} }
