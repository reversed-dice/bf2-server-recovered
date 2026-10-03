// FUNCTION: BF2 0x5a0c80
namespace dice { namespace hfe { namespace world {
extern void fn_408238(void* self);
extern void* g_collisionManager;
typedef void (*vfn_48)(void*, void*);
void cb_5a0c80(void* self, const void* s) {
    fn_408238((char*)self + 0x88);
    void* q = g_collisionManager;
    (*(vfn_48*)((char*)*(void**)q + 0x48))(q, (char*)self + 0x88);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ParticleTemplate_setCollisionMesh_std_string_constref (0x5a0c80)
