// FUNCTION: BF2 0x5be100
namespace dice { namespace hfe { namespace world {
typedef void (*vfn0)(void*);
void fn_0x5be100(void* self, void* obj) {
    *(void**)((char*)self+0x18) = obj;
    void* g = *(void**)0x10b8c08;
    void** vt = *(void***)g;
    ((vfn0)vt[0x340/8])(g);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_StrategicObjectComp_init_dice_hfe_world_IObjectptr (0x5be100)
