// FUNCTION: BF2 0x7a3320
// File::write 0x7a3320 — deref + virtual [0x28]
namespace dice { namespace hfe { namespace io {

typedef void* (*VF2)(void*, void const*, unsigned int);

void* write2(void* self, void const* data, unsigned int n) {
    void* f = *(void**)self;
    VF2 fn = (VF2)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(f) + 0x28));
    return fn(f, data, n);
}

}}}
