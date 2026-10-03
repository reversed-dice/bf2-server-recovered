// FUNCTION: BF2 0x717e60
namespace dice { namespace hfe { namespace world {
typedef void (*vf_reset_t)(void*, int);
void fn_0x717e60(void* self) {
    *((char*)self+0x20) = 1;
    vf_reset_t f = (*(vf_reset_t**)self)[0x68/8];
    f(self, 0);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_CollisionMesh_reset (0x717e60)
