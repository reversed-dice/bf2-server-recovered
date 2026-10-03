// FUNCTION: BF2 0x591f00
namespace dice { namespace hfe { namespace world {
typedef bool (*vfn0b)(void*);
bool fn_0x591f00(void* self) {
    void* m = *(void**)((char*)self+0x70);
    if (!m) return true;
    void** vt = *(void***)m;
    return ((vfn0b)vt[0x68/8])(m);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_DecalTemplate_getUsedOnTransparentMaterials_const (0x591f00)
