// FUNCTION: BF2 0x5609c0
// DestroyableObjectTemplate dtor 0x5155b0 — 4 vptr + tail-call
namespace dice { namespace hfe { namespace world {

extern void dot_base(void* p);

void dot_dtor(void* p) {
    *(void**)p = (void*)0xb51fb0;
    *(void**)((char*)p + 0x10) = (void*)0xb52240;
    *(void**)((char*)p + 0x68) = (void*)0xb52278;
    *(void**)((char*)p + 0x1c8) = (void*)0xb522f8;
    dot_base(p);
}

}}}
