// FUNCTION: BF2 0x60c520
// SoldierBasedRecoilComp dtor 0x60c520 — 2 vptr + tail-call
namespace dice { namespace hfe { namespace world {

extern void sbrc_base2(void* p);

void sbrc_dtor2(void* p) {
    *(void**)p = (void*)0xb79730;
    *(void**)((char*)p + 0x20) = (void*)0xb798c0;
    sbrc_base2(p);
}

}}}
