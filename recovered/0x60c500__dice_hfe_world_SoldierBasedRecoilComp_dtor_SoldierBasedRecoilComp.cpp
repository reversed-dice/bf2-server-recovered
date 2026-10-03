// FUNCTION: BF2 0x60c500
// SoldierBasedRecoilComp dtor 0x60c500 — 2 vptr + tail-call
namespace dice { namespace hfe { namespace world {

extern void sbrc_base(void* p);

void sbrc_dtor(void* p) {
    *(void**)p = (void*)0xb79730;
    *(void**)((char*)p + 0x20) = (void*)0xb798c0;
    sbrc_base(p);
}

}}}
