// FUNCTION: BF2 0x537b90
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe { namespace world {

extern void* fn_69a1e0(void* a);
extern void fn_537a40(void* self, bool b);

typedef void* (*VFn)(void*);
typedef float (*FFn)(void*);

void updateAmbientSound_0x537b90(void* self)
{
    void* v = *(void**)((char*)self + 0x268);
    if (v == 0)
        return;
    void* o = *(void**)((char*)v + 8);
    if (o == 0)
        return;
    void* pm = *(void**)0x112ee38;
    if (o != ((VFn)(*(void***)pm)[0x60 / 8])(pm))
        return;
    if (*(void**)((char*)self + 0x4a8) == 0)
        return;
    void* root = fn_69a1e0(self);
    void* c = *(void**)((char*)root + 0x78);
    void* r = *(void**)((char*)self + 0x4a0);
    if (c != 0) {
        float d = ((FFn)(*(void***)c)[0x78 / 8])(c);
        void* m = *(void**)((char*)self + 0x250);
        float s = *(float*)((char*)m + 0x3c4);
        if (d < ((FFn)(*(void***)c)[0x108 / 8])(c) * s)
            r = *(void**)((char*)self + 0x4a8);
    }
    if (r == *(void**)((char*)self + 0x498))
        return;
    *(void**)((char*)self + 0x498) = r;
    fn_537a40(self, true);
}

} }
}
