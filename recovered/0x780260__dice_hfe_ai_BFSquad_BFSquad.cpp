// FUNCTION: BF2 0x780260
// BFSquad ctor 0x780260 — base + vptr
namespace dice { namespace hfe { namespace ai {

extern void bfsquad_base(void* p);

void bfsquad_ctor(void* p) {
    bfsquad_base(p);
    *(void**)p = (void*)0xba2fd0;
}

}}}
