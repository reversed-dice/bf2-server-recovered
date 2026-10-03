// FUNCTION: BF2 0x608880
namespace dice { namespace hfe { namespace world {
extern "C" void* dice_hfe_world_TargetObject_getTargetObjectId(void*);
void* fn_0x608880(void* self) {
    void* a = *(void**)((char*)self+0x48);
    if (!a) return 0;
    void* b = *(void**)((char*)a+8);
    if (!b) return 0;
    return dice_hfe_world_TargetObject_getTargetObjectId(b);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_TargetComp_getTargetObjectNetworkId_const (0x608880)
