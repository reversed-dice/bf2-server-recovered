// FUNCTION: BF2 0x5f1ec0
// SoldierDeviationCompTemplate dtor 0x5f1ec0 — 2 vptr + delete
namespace dice { namespace hfe { namespace world {

extern void op_delete(void* p);

void sdct_dtor(void* p) {
    *(void**)p = (void*)0xb71630;
    *(void**)((char*)p + 8) = (void*)0xb716b8;
    op_delete(p);
}

}}}
