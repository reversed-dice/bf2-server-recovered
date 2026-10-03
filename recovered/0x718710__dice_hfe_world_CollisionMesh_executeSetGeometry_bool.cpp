// FUNCTION: BF2 0x718710
namespace dice { namespace hfe { namespace world {
void fn_0x718710(void* self) {
    if (*(char*)((char*)self+0x28) != 0) {
        int v = *(int*)((char*)self+0x2c);
        *(char*)((char*)self+0x28) = 0;
        *(char*)((char*)self+0x20) = 0;
        *(char*)((char*)self+0x30) = 0;
        *(int*)((char*)self+0x24) = v;
    }
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_CollisionMesh_executeSetGeometry_bool (0x718710)
