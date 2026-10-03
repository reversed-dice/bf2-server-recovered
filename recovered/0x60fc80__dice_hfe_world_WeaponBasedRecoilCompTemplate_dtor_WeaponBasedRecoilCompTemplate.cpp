// FUNCTION: BF2 0x60fc80
// WeaponBasedRecoilCompTemplate dtor 0x60fc80 — 2 vptr + delete
namespace dice { namespace hfe { namespace world {

extern void op_delete2(void* p);

void wbrct_dtor(void* p) {
    *(void**)p = (void*)0xb79430;
    *(void**)((char*)p + 8) = (void*)0xb794b8;
    op_delete2(p);
}

}}}
