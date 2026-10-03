// FUNCTION: BF2 0x521d50
// GrapplingHookRopeContainerTemplate dtor 0x521d50 — 5 vptr + tail-call
namespace dice { namespace hfe { namespace world {

extern void ghrct_base(void* p);

void ghrct_dtor(void* p) {
    *(void**)p = (void*)0xb42d10;
    *(void**)((char*)p + 0x10) = (void*)0xb431b0;
    *(void**)((char*)p + 0x68) = (void*)0xb431e8;
    *(void**)((char*)p + 0x1c8) = (void*)0xb43268;
    *(void**)((char*)p + 0x1f8) = (void*)0xb432d0;
    ghrct_base(p);
}

}}}
