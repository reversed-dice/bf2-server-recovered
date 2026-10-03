// FUNCTION: BF2 0x76aa20
namespace dice { namespace hfe {
void* fn_0x76aa20(void* self) {
    int a = *(int*)((char*)self+8);
    int b = *(int*)self;
    *(int*)self = a;
    *(int*)((char*)self+8) = b;
    return self;
}
} }
// REVERSED_FUNCTION: dice_hfe_flipVec3XZ_dice_hfe_Vec3ref (0x76aa20)
