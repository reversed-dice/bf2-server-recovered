// FUNCTION: BF2 0x60eb40
// WeaponBasedRecoilComp dtor 0x60eb40 — 2 vptr + tail-call
namespace dice { namespace hfe { namespace world {

extern void wbrc_base(void* p);

void wbrc_dtor(void* p) {
    *(void**)p = (void*)0xb79d10;
    *(void**)((char*)p + 0x20) = (void*)0xb79ea0;
    wbrc_base(p);
}

}}}
