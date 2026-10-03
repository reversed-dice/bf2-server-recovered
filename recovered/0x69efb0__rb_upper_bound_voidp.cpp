// FUNCTION: BF2 0x69efb0
#include <map>
void* fn(std::map<void*, void*>* m, void** key) {
    std::map<void*, void*>::iterator it = m->upper_bound(*key);
    return it._M_node;
}
