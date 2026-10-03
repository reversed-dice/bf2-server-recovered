// FUNCTION: BF2 0x4c5bc0
#include <map>
void* fn_4652c0(std::map<unsigned char, void*>* m, unsigned char* key) {
    std::map<unsigned char, void*>::iterator it = m->find(*key);
    return it._M_node;
}