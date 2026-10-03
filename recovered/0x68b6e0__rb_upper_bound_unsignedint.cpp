// FUNCTION: BF2 0x68b6e0
#include <map>
void* fn(std::map<unsigned int, void*>* m, unsigned int* key) {
    std::map<unsigned int, void*>::iterator it = m->upper_bound(*key);
    return it._M_node;
}
