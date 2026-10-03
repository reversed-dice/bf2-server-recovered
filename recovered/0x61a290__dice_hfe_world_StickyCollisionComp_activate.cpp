// FUNCTION: BF2 0x61a290
namespace dice { namespace hfe { namespace world {

extern "C" void StickyProjectileManager_addStickyProjectile(void*, void*);
void fn_0x61a290(void* self) {
    void* g = *(void**)0x1091b20;
    if (!g) return;
    void* p = *(void**)((char*)self+0x18);
    StickyProjectileManager_addStickyProjectile(g, p);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_StickyCollisionComp_activate (0x61a290)
