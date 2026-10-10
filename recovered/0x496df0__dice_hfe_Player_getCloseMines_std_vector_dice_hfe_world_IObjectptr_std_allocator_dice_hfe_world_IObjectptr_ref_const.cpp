// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x496df0
#include <vector>
extern "C" void* _ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base(void*);
struct IObject;
void f_496df0(char* self, std::vector<IObject*>* out)
{
    char* end = self + 0x188;
    char* n = *(char**)(self + 0x198);
    while (n != end) {
        char* r = *(char**)(n + 0x20);
        IObject* o = r ? *(IObject**)(r + 8) : 0;
        if (o != 0)
            out->push_back(o);
        n = (char*)_ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base(n);
    }
}
