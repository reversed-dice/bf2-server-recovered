// FUNCTION: BF2 0x4656a0
#include <map>
const void* fn(const std::map<unsigned char, void*>* m, unsigned char* key) {
    std::map<unsigned char, void*>::const_iterator it = m->find(*key);
    return it._M_node;
}
