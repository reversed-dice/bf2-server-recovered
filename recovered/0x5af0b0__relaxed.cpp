// FUNCTION: BF2 0x5af0b0
namespace dice { namespace hfe { namespace world {
float fn_0x5af070(void* self) {
    if (*(char*)((char*)self+0x25) == 1) {
        void* p = *(void**)((char*)self+0x10);
        return *(float*)((char*)p+0x1b0);
    }
    void* p = *(void**)((char*)self+0x10);
    return *(float*)((char*)p+0x198);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ArmorGLComp_getExplosionForceMod (0x5af070)
