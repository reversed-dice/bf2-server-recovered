// FUNCTION: BF2 0x617170
namespace dice { namespace hfe { namespace world {

extern "C" void rbtree_insert_unique(void*, void*);
void fn_0x617170(void* self, void* p) {
    struct { long pad0[3]; void* val; long pad1[2]; } s;
    s.val = p;
    rbtree_insert_unique(self, &s.val);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_StickyProjectileManager_addStickyProjectile_dice_hfe_world_GenericProjectileptr (0x617170)
