// FUNCTION: BF2 0x586da0
namespace dice { namespace hfe { namespace world {

extern "C" void Bundle_enableCachedObject(void*);
extern "C" void RotationalBundle_applyRotation_Vec3_constref(void*, void*);
void fn_0x586da0(void* self) {
    Bundle_enableCachedObject(self);
    RotationalBundle_applyRotation_Vec3_constref(self, (char*)self+0x240);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_RotationalBundle_enableCachedObject (0x586da0)
