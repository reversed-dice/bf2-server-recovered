// FUNCTION: BF2 0x560730
// TargetObjectTemplate dtor 0x560730 — 4 vptr + tail-call
namespace dice { namespace hfe { namespace world {

extern void tot_base(void* p);

void tot_dtor(void* p) {
    *(void**)p = (void*)0xb51650;
    *(void**)((char*)p + 0x10) = (void*)0xb518e0;
    *(void**)((char*)p + 0x68) = (void*)0xb51918;
    *(void**)((char*)p + 0x1c8) = (void*)0xb51998;
    tot_base(p);
}

}}}
