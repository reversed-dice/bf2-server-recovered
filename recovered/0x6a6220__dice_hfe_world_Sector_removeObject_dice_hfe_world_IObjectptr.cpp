// FUNCTION: BF2 0x6a6220
namespace dice { namespace hfe { namespace world {
extern "C" void rbtree_erase_iobject(void*, void*);
void fn_0x6a6220(void* self, void* obj) {
    void* local = obj;
    rbtree_erase_iobject((char*)self+0x10, &local);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_Sector_removeObject_dice_hfe_world_IObjectptr (0x6a6220)
