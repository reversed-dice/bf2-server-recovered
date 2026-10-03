// FUNCTION: BF2 0x7650e0
// RotationalBundle dtor 0x5853b0 — 3 vptr + virtual release + tail-call base
namespace dice { namespace hfe { namespace world {

typedef void (*VF0)(void*);
extern void rb_base(void* p);

void rb_dtor(void* p) {
    *(void**)p = (void*)0xba0a90;
    *(void**)((char*)p + 0x10) = (void*)0xba0d48;
    *(void**)((char*)p + 0x68) = (void*)0xba0d80;
    void* m = *(void**)((char*)p + 0x78);
    if (m) {
        VF0 fn = (VF0)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(m) + 8));
        fn(m);
    }
    rb_base(p);
}

}}}

// re-trigger validate 2026-08-06 20:39:08

// re-trigger validate 2026-08-07 00:30:56
