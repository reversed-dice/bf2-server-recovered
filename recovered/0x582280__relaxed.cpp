// FUNCTION: BF2 0x582280
// DestroyableObjectTemplate dtor 0x5155b0 — 4 vptr + tail-call
namespace dice { namespace hfe { namespace world {

extern void dot_base(void* p);

void dot_dtor(void* p) {
    *(void**)p = (void*)0xb59ff0;
    *(void**)((char*)p + 0x10) = (void*)0xb5a280;
    *(void**)((char*)p + 0x68) = (void*)0xb5a2b8;
    *(void**)((char*)p + 0x1c8) = (void*)0xb5a338;
    dot_base(p);
}

}}}
