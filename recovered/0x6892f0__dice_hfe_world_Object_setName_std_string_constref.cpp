// FUNCTION: BF2 0x6892f0
#include <string>
extern "C" void fn_408238(void*, void*);
typedef void (*vfn3_t)(void*, int, int);
void fn_6892f0(void* self, std::string* src) {
    std::string* s = (std::string*)((char*)self + 0x1e0);
    if (!s->empty()) {
        ((vfn3_t*)*(void***)self)[0xc0/8](self, 0, 0x4000);
    }
    s->assign(*src);
    ((vfn3_t*)*(void***)self)[0xc0/8](self, 0x4000, 0);
}