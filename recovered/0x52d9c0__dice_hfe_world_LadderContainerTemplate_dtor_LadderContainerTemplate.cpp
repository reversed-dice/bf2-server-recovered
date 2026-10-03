// FUNCTION: BF2 0x52d9c0
// LadderContainerTemplate dtor 0x52d9c0 — 5 vptr + tail-call
namespace dice { namespace hfe { namespace world {

extern void lct_base(void* p);

void lct_dtor(void* p) {
    *(void**)p = (void*)0xb46890;
    *(void**)((char*)p + 0x10) = (void*)0xb46d30;
    *(void**)((char*)p + 0x68) = (void*)0xb46d68;
    *(void**)((char*)p + 0x1c8) = (void*)0xb46de8;
    *(void**)((char*)p + 0x1f8) = (void*)0xb46e50;
    lct_base(p);
}

}}}
