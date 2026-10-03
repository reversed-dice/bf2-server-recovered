// FUNCTION: BF2 0x7cae10
#include <map>
void* fn(std::map<unsigned short, void*>* m, unsigned short* key) {
    std::map<unsigned short, void*>::iterator it = m->upper_bound(*key);
    return it._M_node;
}
