// FUNCTION: BF2 0x6220f0
namespace dice { namespace hfe { namespace world {

extern "C" int TargetObject_getTargetObjectId(void*);
int fn_0x6220f0(void* self) {
    void* p = *(void**)((char*)self+0x30);
    if (!p) return -1;
    void* q = *(void**)((char*)p+8);
    if (!q) return -1;
    return TargetObject_getTargetObjectId(q);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_SeekClosestTargetComp_getTargetObjectNetworkId_const (0x6220f0)
