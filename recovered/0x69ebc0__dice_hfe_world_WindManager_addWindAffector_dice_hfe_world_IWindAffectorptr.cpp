// FUNCTION: BF2 0x69ebc0
namespace dice { namespace hfe { namespace world {
extern "C" void rbtree_insert_windaffector(void*, void*);
void fn_0x69ebc0(void* self, void* affector) {
    struct { long pad0[3]; void* local; long pad1[1]; } s;
    s.local = affector;
    rbtree_insert_windaffector((char*)self+0x10, &s.local);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_WindManager_addWindAffector_dice_hfe_world_IWindAffectorptr (0x69ebc0)
