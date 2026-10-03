// FUNCTION: BF2 0x4ce6f0
namespace dice { namespace hfe {

typedef void (*vfn0)(void*);
void fn_0x4ce6f0(int unused) {
    void* g = *(void**)0x10b8c08;
    void** vt = *(void***)g;
    ((vfn0)vt[0x60/8])(g);
    void* g2 = *(void**)0x10b8c08;
    void** vt2 = *(void***)g2;
    ((vfn0)vt2[0x58/8])(g2);
}

} }
// REVERSED_FUNCTION: dice_hfe_ServerVoteManager_changeMap_int (0x4ce6f0)
