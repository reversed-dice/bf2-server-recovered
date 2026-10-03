// FUNCTION: BF2 0x577480
namespace dice { namespace hfe { namespace world {
unsigned char fn_0x577480(void* self) {
    if (*(int*)((char*)self+0x2cc) == 1) {
        char* p = *(char**)((char*)self+0x28);
        unsigned char v = *(unsigned char*)(p+0x35d);
        return v ^ 1;
    }
    return true;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_Camera_getAllowDynamicSun_const (0x577480)
