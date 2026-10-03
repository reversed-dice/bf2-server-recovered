// FUNCTION: BF2 0x5f0fa0
// SoldierDeviationComp dtor 0x5f0fa0 — 2 vptr + tail-call
namespace dice { namespace hfe { namespace world {

extern void sdc_base2(void* p);

void sdc_dtor2(void* p) {
    *(void**)p = (void*)0xb71e70;
    *(void**)((char*)p + 0x20) = (void*)0xb71ff8;
    sdc_base2(p);
}

}}}
