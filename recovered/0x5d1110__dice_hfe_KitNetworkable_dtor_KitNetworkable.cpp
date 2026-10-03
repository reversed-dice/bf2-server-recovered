// FUNCTION: BF2 0x5d1110
// KitNetworkable dtor 0x5d1110 — 2 vptr + tail-call
namespace dice { namespace hfe {

extern void kn_base2(void* p);

void kn_dtor2(void* p) {
    *(void**)p = (void*)0xb6cef0;
    *(void**)((char*)p + 0x50) = (void*)0xb6cf98;
    kn_base2(p);
}

}}
