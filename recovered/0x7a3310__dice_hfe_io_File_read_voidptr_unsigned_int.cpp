// FUNCTION: BF2 0x7a3310
// File::read 0x7a3310 — deref + virtual slot 0x20
namespace dice { namespace hfe { namespace io {

typedef void* (*VF2)(void*, void*, unsigned int);

void* read(void* self, void* buf, unsigned int n) {
    void* f = *(void**)self;
    VF2 fn = (VF2)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(f) + 0x20));
    return fn(f, buf, n);
}

}}}

// re-trigger validate 2026-08-06 20:40:41

// re-trigger validate 2026-08-07 00:31:58
