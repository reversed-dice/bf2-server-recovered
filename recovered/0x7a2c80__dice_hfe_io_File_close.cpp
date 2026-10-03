// FUNCTION: BF2 0x7a2c80
// File::close 0x7a2c80 — deref + virtual call slot 0x10 + reset
namespace dice { namespace hfe { namespace io {

typedef void (*VF0)(void*);

void file_close(void* p) {
    void* f = *(void**)p;
    if (f) {
        VF0 fn = (VF0)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(f) + 0x10));
        fn(f);
        *(void**)p = 0;
    }
}

}}}
