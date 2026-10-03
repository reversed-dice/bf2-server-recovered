// FUNCTION: BF2 0x8458c0
#include <map>
void* fn_8458c0(std::map<unsigned short, long long>* m, unsigned short* key) {
    std::map<unsigned short, long long>::iterator it = m->find(*key);
    return it._M_node;
}