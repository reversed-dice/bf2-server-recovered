// FUNCTION: BF2 0x617190
namespace dice { namespace hfe { namespace world {

extern "C" void rbtree_erase_node(void*, void*);
void fn_0x617190(void* self) {
    void* g = *(void**)0x1091b20;
    void* newg = (g == self) ? 0 : g;
    *(void**)0x1091b20 = newg;
    void* p = *(void**)((char*)self+0x10);
    rbtree_erase_node(self, p);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_StickyProjectileManager_dtor_StickyProjectileManager (0x617190)
