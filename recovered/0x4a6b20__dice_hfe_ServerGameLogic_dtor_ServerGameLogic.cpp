
// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x4a6b20
#include <string>
#include <vector>
#include <map>

struct Sub {
    std::string s;
    char v[8];
};

struct Elem {
    std::string a;
    std::string b;
    char pad[0x10];
    Sub x[2];
};

struct Maps {
    std::map<int, int> m[2];
};

extern "C" void fn_473a80(void*);
extern "C" void fn_569b60(void*);
extern "C" void fn_4784d0(void*);
extern "C" void _ZdlPv(void*);

void sgl_dtor(char* self) {
    *(void**)(self) = (void*)0xb35810;
    *(void**)(self + 0x8) = (void*)0xb35e30;
    void* c = *(void**)0x108caa8;
    if (c) {
        fn_473a80(c);
        _ZdlPv(c);
    }
    void* u = *(void**)0x108f2a0;
    if (u) {
        fn_569b60(u);
        _ZdlPv(u);
    }
    reinterpret_cast<std::vector<Elem>*>(self + 0x570)->~vector<Elem>();
    reinterpret_cast<Maps*>(self + 0x4e8)->~Maps();
    fn_4784d0(self);
}
