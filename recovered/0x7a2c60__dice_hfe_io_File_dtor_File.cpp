// FUNCTION: BF2 0x7a2c60
// File::dtor 0x7a2c60 — fonction libre, deref + virtual call slot 0x10
namespace dice { namespace hfe { namespace io {

typedef void (*VF0)(void*);

void file_dtor(void* p) {
    void* f = *(void**)p;
    if (f) {
        VF0 fn = (VF0)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(f) + 0x10));
        fn(f);
    }
}

}}}

// re-trigger validate 2026-08-06 17:11:33
