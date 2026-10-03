// FUNCTION: BF2 0x536620
// ParachuteTemplate dtor 0x536620 — 5 vptr + tail-call
namespace dice { namespace hfe { namespace world {

extern void pt_base(void* p);

void pt_dtor(void* p) {
    *(void**)p = (void*)0xb49df0;
    *(void**)((char*)p + 0x10) = (void*)0xb4a290;
    *(void**)((char*)p + 0x68) = (void*)0xb4a2c8;
    *(void**)((char*)p + 0x1c8) = (void*)0xb4a348;
    *(void**)((char*)p + 0x1f8) = (void*)0xb4a3b0;
    pt_base(p);
}

}}}
