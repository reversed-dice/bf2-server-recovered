// FUNCTION: BF2 0x7652f0
// SoundObjectTemplate::getLowSamples 0x7652f0 — deref + virtual
namespace dice { namespace hfe {

typedef void* (*VF_GETSAMPLES)(void*, int);

void* getLowSamples(void* self) {
    void* a = *(void**)((char*)self + 0x78);
    VF_GETSAMPLES f = (VF_GETSAMPLES)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(a) + 0x180));
    return f(a, 2);
}

}}
