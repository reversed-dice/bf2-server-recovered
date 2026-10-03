// FUNCTION: BF2 0x7cba30
#include <map>
void* fn_7cba30(std::map<unsigned short, void*>* m, unsigned short* key) {
    std::map<unsigned short, void*>::iterator it = m->find(*key);
    return it._M_node;
}