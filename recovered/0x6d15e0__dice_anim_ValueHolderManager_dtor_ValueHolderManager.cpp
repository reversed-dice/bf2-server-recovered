// FUNCTION: BF2 0x6d15e0
struct RbTree0 { void erase(void*); };
extern "C" void* _ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base(void*);
extern "C" void dtor_6d15e0(char* param_1) {
    char* end = param_1 + 8;
    char* node = *(char**)(param_1 + 0x18);
    if (node != end) {
        do {
            if (*(void**)(node + 0x28) != 0) operator delete(*(void**)(node + 0x28));
            node = (char*)_ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base(node);
        } while (node != end);
    }
    RbTree0* t0 = (RbTree0*)param_1;
    t0->erase(*(void**)((char*)t0 + 0x10));
}
// REVERSED_FUNCTION: dice_anim_ValueHolderManager_dtor_ValueHolderManager (0x6d15e0)
