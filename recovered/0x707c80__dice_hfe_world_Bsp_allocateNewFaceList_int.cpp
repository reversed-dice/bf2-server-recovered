// FUNCTION: BF2 0x707c80
extern "C" void* real_0x4073a8(long offset);

namespace dice { namespace hfe { namespace world {
void* fn_0x707c80(void* self, int n) {
    *(int*)((char*)self+0x58) += n;
    return real_0x4073a8((long)n * 8);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_Bsp_allocateNewFaceList_int (0x707c80)
