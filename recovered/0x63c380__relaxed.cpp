// FUNCTION: BF2 0x63c380
// DestroyableObjectTemplate dtor 0x5155b0 — 4 vptr + tail-call
namespace dice { namespace hfe { namespace world {

extern void dot_base(void* p);

void dot_dtor(void* p) {
    *(void**)p = (void*)0xb85cf0;
    *(void**)((char*)p + 0x10) = (void*)0xb85f80;
    *(void**)((char*)p + 0x68) = (void*)0xb85fb8;
    *(void**)((char*)p + 0x1c8) = (void*)0xb86038;
    dot_base(p);
}

}}}
