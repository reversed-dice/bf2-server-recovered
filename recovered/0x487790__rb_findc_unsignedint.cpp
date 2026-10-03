// FUNCTION: BF2 0x487790
#include <map>
const void* fn(const std::map<unsigned int, void*>* m, unsigned int* key) {
    std::map<unsigned int, void*>::const_iterator it = m->find(*key);
    return it._M_node;
}
