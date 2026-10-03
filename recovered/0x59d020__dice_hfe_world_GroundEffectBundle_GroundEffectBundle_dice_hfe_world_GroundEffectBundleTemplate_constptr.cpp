// FUNCTION: BF2 0x59d020
// GroundEffectBundle ctor 0x59d020 — base + 2 vptr
namespace dice { namespace hfe { namespace world {

extern void geb_base2(void* p);

void geb_ctor(void* p, void* tmpl) {
    geb_base2(p);
    *(void**)p = (void*)0xb60ed0;
    *(void**)((char*)p + 0x100) = (void*)0xb611e0;
}

}}}
