// FUNCTION: BF2 0x6bb160
namespace dice { namespace hfe { namespace world {
extern "C" void rbtree_erase_windaffector(void*, void*);
void fn_0x69eba0(void* self, void* affector) {
    void* local = affector;
    rbtree_erase_windaffector((char*)self+0x128, &local);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_WindManager_removeWindAffector_dice_hfe_world_IWindAffectorptr (0x69eba0)
