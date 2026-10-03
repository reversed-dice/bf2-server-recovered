// FUNCTION: BF2 0x4a4750
namespace dice { namespace hfe {

typedef void* (*vfn0)(void*);
extern "C" void ServerGameLogic_do_toggleFreeCamera_IPlayerptr(void*, void*);
void fn_0x4a4750(void* self) {
    void* g = *(void**)0x112ee38;
    void** vt = *(void***)g;
    void* r = ((vfn0)vt[0x60/8])(g);
    ServerGameLogic_do_toggleFreeCamera_IPlayerptr(self, r);
}

} }
// REVERSED_FUNCTION: dice_hfe_ServerGameLogic_toggleLocalFreeCamera (0x4a4750)
