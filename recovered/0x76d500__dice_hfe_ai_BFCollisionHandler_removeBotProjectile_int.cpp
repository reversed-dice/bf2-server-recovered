// FUNCTION: BF2 0x76d500
namespace dice { namespace hfe { namespace ai {

void fn_0x76d500(void* self, int idx) {
    void** arr1 = *(void***)((char*)self+0x10);
    void* p1 = arr1[idx];
    *(unsigned char*)((char*)p1+8) = 0;
    void** arr2 = *(void***)((char*)self+0x10);
    void* p2 = arr2[idx];
    *(unsigned char*)((char*)p2+9) = 0;
}

} } }
// REVERSED_FUNCTION: dice_hfe_ai_BFCollisionHandler_removeBotProjectile_int (0x76d500)
