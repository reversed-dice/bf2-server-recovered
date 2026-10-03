// FUNCTION: BF2 0x599300
// Emitter dtor 0x599300 — 2 vptr + tail-call
namespace dice { namespace hfe { namespace world {

extern void em_base(void* p);

void em_dtor(void* p) {
    *(void**)p = (void*)0xb5fbb0;
    *(void**)((char*)p + 0x100) = (void*)0xb5fec0;
    em_base(p);
}

}}}
