// FUNCTION: BF2 0x60a6e0
// DefaultAnimationComp dtor v2 0x60a6e0 — 2 vptr + base + delete
namespace dice { namespace hfe { namespace world {

extern void dac_base2(void* p);
extern void op_delete_dac(void* p);

void dac_dtor2(void* p) {
    *(void**)p = (void*)0xb786d0;
    *(void**)((char*)p + 0x20) = (void*)0xb78848;
    dac_base2(p);
    op_delete_dac(p);
}

}}}
