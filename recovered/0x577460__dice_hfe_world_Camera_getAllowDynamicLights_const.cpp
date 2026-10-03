// FUNCTION: BF2 0x577460
namespace dice { namespace hfe { namespace world {
unsigned char fn_0x577460(void* self) {
    if (*(int*)((char*)self+0x2cc) == 1) {
        char* p = *(char**)((char*)self+0x28);
        return *(unsigned char*)(p+0x35c);
    }
    return true;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_Camera_getAllowDynamicLights_const (0x577460)
