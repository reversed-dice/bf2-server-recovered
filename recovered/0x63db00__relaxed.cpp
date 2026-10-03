// FUNCTION: BF2 0x63db00
// DestroyableObjectTemplate dtor 0x5155b0 — 4 vptr + tail-call
namespace dice { namespace hfe { namespace world {

extern void dot_base(void* p);

void dot_dtor(void* p) {
    *(void**)p = (void*)0xb865d0;
    *(void**)((char*)p + 0x10) = (void*)0xb86860;
    *(void**)((char*)p + 0x68) = (void*)0xb86898;
    *(void**)((char*)p + 0x1c8) = (void*)0xb86918;
    dot_base(p);
}

}}}
