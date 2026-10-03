// FUNCTION: BF2 0x5853b0
// RotationalBundle dtor 0x5853b0 — 3 vptr + virtual release + tail-call base
namespace dice { namespace hfe { namespace world {

typedef void (*VF0)(void*);
extern void rb_base(void* p);

void rb_dtor(void* p) {
    *(void**)p = (void*)0xb5b490;
    *(void**)((char*)p + 0x100) = (void*)0xb5b7e0;
    *(void**)((char*)p + 0x238) = (void*)0xb5b818;
    void* m = *(void**)((char*)p + 0x2a8);
    if (m) {
        VF0 fn = (VF0)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(m) + 8));
        fn(m);
    }
    rb_base(p);
}

}}}

// re-trigger validate 2026-08-06 20:39:08

// re-trigger validate 2026-08-07 00:30:56
