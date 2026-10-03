// FUNCTION: BF2 0x5ffea0
namespace dice { namespace hfe { namespace world {
typedef int (*vfn0i)(void*);
bool fn_0x5ffea0(void* self) {
    void** vt = *(void***)self;
    return ((vfn0i)vt[0x240/8])(self) != 0;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ThrownFireComp_busy (0x5ffea0)
