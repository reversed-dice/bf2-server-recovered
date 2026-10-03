// FUNCTION: BF2 0x569a00
namespace dice { namespace hfe { namespace world {

typedef void (*vfn4)(void*,void*,int,float);
extern "C" void dice_hfe_world_Bundle_enableCachedObject(void*);
void fn_0x55d2b0(void* self) {
    dice_hfe_world_Bundle_enableCachedObject(self);
    void* g = *(void**)0x112ee48;
    void** vt = *(void***)g;
    ((vfn4)vt[0x1a0/8])(g, self, 0x1d, 1.0f);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_UAVVehicle_enableCachedObject (0x55d2b0)
