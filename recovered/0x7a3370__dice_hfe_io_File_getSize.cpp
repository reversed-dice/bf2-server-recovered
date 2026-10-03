// FUNCTION: BF2 0x7a3370
// File::getSize 0x7a3370 — deref + virtual slot 0x70
namespace dice { namespace hfe { namespace io {

typedef unsigned long long (*VF1)(void*);

unsigned long long getSize(void* self) {
    void* f = *(void**)self;
    VF1 fn = (VF1)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(f) + 0x70));
    return fn(f);
}

}}}

// re-trigger validate 2026-08-06 20:40:19

// re-trigger validate 2026-08-07 00:31:34
