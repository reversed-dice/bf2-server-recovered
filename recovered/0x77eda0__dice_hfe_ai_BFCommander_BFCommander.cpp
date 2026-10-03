// FUNCTION: BF2 0x77eda0
// BFCommander ctor 0x77eda0 — base + vptr
namespace dice { namespace hfe { namespace ai {

extern void bfc_base(void* p);

void bfc_ctor(void* p) {
    bfc_base(p);
    *(void**)p = (void*)0xba2e70;
}

}}}
