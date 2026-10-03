// FUNCTION: BF2 0x718ac0
namespace dice { namespace hfe { namespace world {
extern "C" bool fn_0x718ac0(void* self, int a, int b, int c, int d) {
    typedef bool (*vf_same_t)(void*, int, int, int, int);
    return (*(vf_same_t**)self)[0x100/8](self, a, b, c, d);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_CollisionMesh_sameInstance_int_int_int_int_const (0x718ac0)
