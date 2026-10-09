// FUNCTION: BF2 0x8827d0
#include <string>
namespace dice { namespace hfe { namespace world {

class ConsoleClass337 {
public:
    virtual long executeObjectMethod();
};

long ConsoleClass337::executeObjectMethod() {
    long r = 0;
    long pad[4] = {0, 0, 0, 0};
    if (*(int*)((char*)this + 0x30) == 1) {
        std::string a(**(std::string**)((char*)this + 0x38));
        *(char*)((char*)this + 0x108) = 1;
        void* g = *(void**)0x10c5420;
        void* p = 0;
        if (g) p = ((void* (*)(void*, unsigned int))(*(void***)g)[0x18/8])(g, *(unsigned int*)0xc76024);
        pad[0] = (long)p;
        p = (void*)pad[0];
        ((std::string*)((char*)this + 0x110))->assign(((std::string (*)(void*, std::string&))(*(void***)p)[0xe0/8])(p, a));
        r = (long)((char*)this + 0x110);
    }
    return r;
}

} } }
