// FUNCTION: BF2 0x4c4470
namespace dice { namespace hfe {

extern "C" void SquadManager_removeAllSquads(void*);
extern "C" void Rb_tree_erase(void*, void*);

void fn_0x4c4470(void* self) {
    *(void**)self = (void*)0xb38550;
    SquadManager_removeAllSquads(self);
    void* tree = (char*)self + 0x10;
    void* root = *(void**)((char*)tree + 0x10);
    Rb_tree_erase(tree, root);
}

} }
// REVERSED_FUNCTION: dice_hfe_SquadManager_dtor_SquadManager (0x4c4470)
