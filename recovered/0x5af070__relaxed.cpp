// FUNCTION: BF2 0x5af070
namespace dice { namespace hfe { namespace world {
float fn_0x5af0b0(void* self) {
    if (*(char*)((char*)self+0x25) == 1) {
        void* p = *(void**)((char*)self+0x10);
        return *(float*)((char*)p+0x1ac);
    }
    void* p = *(void**)((char*)self+0x10);
    return *(float*)((char*)p+0x194);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ArmorGLComp_getExplosionForceMax (0x5af0b0)
