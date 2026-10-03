// FUNCTION: BF2 0x543e60
// RemoteControlledObject dtor 0x543e60 — 2 vptr + tail-call base
namespace dice { namespace hfe { namespace world {

extern void rco_base(void* p);

void rco_dtor(void* p) {
    *(void**)p = (void*)0xb4c910;
    *(void**)((char*)p + 0x100) = (void*)0xb4cc38;
    rco_base(p);
}

}}}
