// FUNCTION: BF2 0x7652d0
// SoundObjectTemplate::setLowSamples 0x7652d0 — deref + virtual
namespace dice { namespace hfe {

typedef void (*VF_SETSAMPLES)(void*, int, int);

void setLowSamples(void* self, int n) {
    void* a = *(void**)((char*)self + 0x78);
    VF_SETSAMPLES f = (VF_SETSAMPLES)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(a) + 0x178));
    f(a, 2, n);
}

}}
