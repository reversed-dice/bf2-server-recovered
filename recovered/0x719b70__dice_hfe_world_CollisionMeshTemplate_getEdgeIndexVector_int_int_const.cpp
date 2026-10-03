// FUNCTION: BF2 0x719b70
namespace dice { namespace hfe { namespace world {
static void* __attribute__((noinline)) real_0x719810(void* self, int a, int b) {
    return self;
}
void* fn_0x719b70(void* self, int a, int b) {
    void* r = real_0x719810(self, a, b);
    return *(void**)((char*)r+0x128);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_CollisionMeshTemplate_getEdgeIndexVector_int_int_const (0x719b70)
