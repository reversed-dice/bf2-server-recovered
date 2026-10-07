// FUNCTION: BF2 0x4509c0
extern "C" void std_Rb_tree_M_erase(void* t, void* node);

void dtor_4509c0(void* self) {
    void* a = (char*)self + 0x30;
    std_Rb_tree_M_erase(a, *(void**)((char*)a + 0x10));
    std_Rb_tree_M_erase(self, *(void**)((char*)self + 0x10));
}
