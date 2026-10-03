// FUNCTION: BF2 0x4871f0
namespace dice { namespace hfe {
struct Node { void* p0; void* p1; void* left; void* right; };
extern "C" void fn_4085b8(void*);
extern "C" void erase_4871f0(void* alloc, Node* x) {
    while (x) {
        erase_4871f0(alloc, (Node*)x->right);
        Node* y = (Node*)x->left;
        fn_4085b8(x);
        x = y;
    }
}
} }
