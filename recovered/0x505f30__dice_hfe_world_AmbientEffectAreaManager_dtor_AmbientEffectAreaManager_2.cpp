// FUNCTION: BF2 0x505f30
namespace dice { namespace hfe { namespace world {

extern "C" void Rb_tree_erase_int(void*, void*);
extern "C" void Rb_tree_erase_ptr(void*, void*);
extern void* g_head_0x108dd50;

void fn_0x505f30(void* self) {
    void* head = g_head_0x108dd50;
    void* newhead = (head == self) ? 0 : head;
    g_head_0x108dd50 = newhead;
    void* tree1 = (char*)self + 0x30;
    void* root1 = *(void**)((char*)tree1 + 0x10);
    Rb_tree_erase_int(tree1, root1);
    void* root2 = *(void**)((char*)self + 0x10);
    Rb_tree_erase_ptr(self, root2);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_AmbientEffectAreaManager_dtor_AmbientEffectAreaManager (0x505f30)
