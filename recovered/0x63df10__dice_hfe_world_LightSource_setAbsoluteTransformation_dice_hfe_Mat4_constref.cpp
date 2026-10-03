// FUNCTION: BF2 0x63df10
namespace dice { namespace hfe { namespace world {
extern "C" void dice_hfe_world_Object_setAbsoluteTransformation_dice_hfe_Mat4_constref(void*, void*);
void fn_0x63df10(void* self, void* mat4) {
    dice_hfe_world_Object_setAbsoluteTransformation_dice_hfe_Mat4_constref(self, mat4);
    *(char*)((char*)self+0x471) = 1;
    *(char*)((char*)self+0x472) = 1;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_LightSource_setAbsoluteTransformation_dice_hfe_Mat4_constref (0x63df10)
