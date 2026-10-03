// FUNCTION: BF2 0x5881f0
// DestroyableObjectTemplate dtor 0x5155b0 — 4 vptr + tail-call
namespace dice { namespace hfe { namespace world {

extern void dot_base(void* p);

void dot_dtor(void* p) {
    *(void**)p = (void*)0xb5b990;
    *(void**)((char*)p + 0x10) = (void*)0xb5bc20;
    *(void**)((char*)p + 0x68) = (void*)0xb5bc58;
    *(void**)((char*)p + 0x1c8) = (void*)0xb5bcd8;
    dot_base(p);
}

}}}
