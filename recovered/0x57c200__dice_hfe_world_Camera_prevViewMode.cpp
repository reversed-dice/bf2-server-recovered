// FUNCTION: BF2 0x57c200
namespace dice { namespace hfe { namespace world {
typedef void (*vfn3)(void*, int, int, int);
void fn_0x57c200(void* self) {
    void** vt = *(void***)self;
    int mode = *(int*)((char*)self+0x36c);
    ((vfn3)vt[0x350/8])(self, mode, 0, 0);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_Camera_prevViewMode (0x57c200)
