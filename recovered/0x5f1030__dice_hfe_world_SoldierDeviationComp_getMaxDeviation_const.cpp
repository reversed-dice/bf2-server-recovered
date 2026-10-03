// FUNCTION: BF2 0x5f1030
namespace dice { namespace hfe { namespace world {

float fn_0x5f1030(void* self) {
    void* p = *(void**)((char*)self+0x78);
    float s = *(float*)((char*)p+0x1c);
    s += *(float*)((char*)p+0x18);
    s += *(float*)((char*)p+0x34);
    s += *(float*)((char*)p+0x44);
    s += *(float*)((char*)p+0x50);
    return s * (*(float*)((char*)p+0x54));
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_SoldierDeviationComp_getMaxDeviation_const (0x5f1030)
