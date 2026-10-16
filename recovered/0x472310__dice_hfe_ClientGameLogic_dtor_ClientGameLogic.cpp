// FUNCTION: BF2 0x472310
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <vector>

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

extern "C" void gamelogic_dtor(void*);

void cgl_dtor(char* self) {
    *(void**)(self) = (void*)0xb32bd0;
    *(void**)(self + 0x8) = (void*)0xb33200;
    reinterpret_cast<std::vector<Elem>*>(self + 0x4a8)->~vector<Elem>();
    gamelogic_dtor(self);
}
