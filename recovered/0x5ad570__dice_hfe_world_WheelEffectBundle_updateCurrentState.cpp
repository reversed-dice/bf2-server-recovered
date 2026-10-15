// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x5ad570
namespace dice { namespace hfe { namespace world {
extern void fn_5ad150(void* a);
extern void fn_5acf10(void* a);
struct Vec3 { float x, y, z; };
struct W {
    char _p000[0x260];
    int f260;
    char _p264[4];
    Vec3 pos;
    char _p274[0x44];
    void* f2b8;
    void* f2c0;
    char f2c8;
};

void updateCurrentState_0x5ad570(void* selfp) {
    W* o = (W*)selfp;
    if (o->f260 == -1) {
        if (o->f2c8 != 0) fn_5acf10(o);
        return;
    }
    void* p = o->f2c0;
    if (p != 0) {
        void* s = o->f2b8;
        if (s != 0) {
            ((void (*)(void*, void*))((*(void***)p)[0x23]))(p, s);
        }
        void (*fn)(void*, void*) = (void (*)(void*, void*))((*(void***)(o->f2c0))[0x1c]);
        Vec3* v = (Vec3*)((void* (*)(void*))((*(void***)o)[0x1b]))(o);
        Vec3 t;
        Vec3* q = &o->pos;
        float a = v->x + q->x;
        float c = v->z + q->z;
        float b = v->y + q->y;
        t.x = a;
        t.z = c;
        t.y = b;
        fn(o->f2c0, &t);
        fn_5ad150(o);
    }
    if (o->f2c8 == 0) {
        void* q = o->f2c0;
        if (q != 0) {
            ((void (*)(void*, int, int, int))((*(void***)q)[0x41]))(q, 0, 0, 0);
        }
        o->f2c8 = 1;
    }
}
} } }
