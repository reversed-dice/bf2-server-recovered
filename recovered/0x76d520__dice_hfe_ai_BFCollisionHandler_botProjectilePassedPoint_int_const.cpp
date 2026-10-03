// FUNCTION: BF2 0x76d520
namespace dice { namespace hfe { namespace ai {
extern "C" unsigned char fn_0x76d520(void* self, int idx) {
    void** arr = *(void***)((char*)self+0x10);
    char* p = (char*)arr[idx];
    return p[9];
}
} } }
// REVERSED_FUNCTION: dice_hfe_ai_BFCollisionHandler_botProjectilePassedPoint_int_const (0x76d520)
