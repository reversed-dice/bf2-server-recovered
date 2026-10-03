// FUNCTION: BF2 0x4a4770
namespace dice { namespace hfe {

typedef void (*vfn0)(void*, bool);
void fn_0x4a4770(void* self, bool arg) {
    unsigned cur = (*(int*)((char*)self+0xa8) == 4);
    if ((unsigned)arg == cur) return;
    void** vt = *(void***)self;
    ((vfn0)vt[0x430/8])(self, arg);
}

} }
// REVERSED_FUNCTION: dice_hfe_ServerGameLogic_setPause_bool (0x4a4770)
