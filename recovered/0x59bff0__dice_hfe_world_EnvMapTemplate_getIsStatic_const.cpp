// FUNCTION: BF2 0x59bff0
namespace dice { namespace hfe { namespace world {
typedef bool (*vfn0b)(void*);
bool fn_0x59bff0(void* self) {
    void* m = *(void**)((char*)self+0x1d0);
    if (!m) return true;
    void** vt = *(void***)m;
    return ((vfn0b)vt[0x20/8])(m);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_EnvMapTemplate_getIsStatic_const (0x59bff0)
