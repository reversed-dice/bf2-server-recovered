// FUNCTION: BF2 0x5f3b90
namespace dice { namespace hfe { namespace world {
extern "C" void rbtree_insert_iobject(void*, void*);
void fn_0x5f3b90(void* self, void* obj) {
    struct { long pad0[3]; void* local; long pad1[1]; } s;
    s.local = obj;
    rbtree_insert_iobject((char*)self+0x178, &s.local);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ExplosivesFireComp_addProjectileReference_dice_hfe_world_IObjectptr (0x5f3b90)
