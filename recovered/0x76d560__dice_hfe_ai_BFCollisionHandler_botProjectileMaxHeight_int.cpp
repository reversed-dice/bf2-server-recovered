// FUNCTION: BF2 0x76d560
namespace dice { namespace hfe { namespace ai {
float fn_0x76d560(void* self, int idx) {
    void** arr = *(void***)((char*)self+0x10);
    char* p = (char*)arr[idx];
    return *(float*)(p+0x40);
}
} } }
// REVERSED_FUNCTION: dice_hfe_ai_BFCollisionHandler_botProjectileMaxHeight_int (0x76d560)
