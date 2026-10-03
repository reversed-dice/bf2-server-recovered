// FUNCTION: BF2 0x6f9820
namespace dice { namespace hfe { namespace world {
typedef void (*vfn_f8)(void*, int, int);
void cb_6f9820(void* self, float x0, float x1) {
    float a = (float)*(int*)((char*)self + 0x24);
    float b = (float)*(int*)((char*)self + 0x20);
    int y = (int)((x1 - a) * *(float*)((char*)self + 0x50));
    int x = (int)((x0 - b) * *(float*)((char*)self + 0x48));
    (*(vfn_f8*)((char*)*(void**)self + 0xf8))(self, x, y);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_Heightmap_getMaterialInWorldCoords_float (0x6f9820)
