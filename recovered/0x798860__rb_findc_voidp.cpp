// FUNCTION: BF2 0x798860
#include <map>
const void* fn(const std::map<void*, void*>* m, void** key) {
    std::map<void*, void*>::const_iterator it = m->find(*key);
    return it._M_node;
}
