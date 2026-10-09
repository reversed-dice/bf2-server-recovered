// FUNCTION: BF2 0x8a4b90
#include <string>
namespace dice { namespace hfe { namespace world {
extern "C" void* g_materialManager;
class ConsoleClass27 {
public:
    virtual void* executeObjectMethod();
};
void* ConsoleClass27::executeObjectMethod() {
    int mode = *(int*)((char*)this + 0x30);
    if (mode == 0) {
        *(unsigned char*)((char*)this + 0x108) = 1;
        void* m = *(void**)0x010c2800;
        void* r = ((void* (*)(void*))*(void**)(*(char**)m + 0x50))(m);
        ((std::string*)((char*)this + 0x110))->assign(((std::string (*)(void*))*(void**)(*(char**)r + 0x28))(r));
        return (std::string*)((char*)this + 0x110);
    }
    if (mode == 1) {
        std::string a(**(std::string**)((char*)this + 0x38));
        *(unsigned char*)((char*)this + 0x108) = 0;
        void* m = *(void**)0x010c2800;
        void* r = ((void* (*)(void*))*(void**)(*(char**)m + 0x50))(m);
        ((void (*)(void*, std::string*))*(void**)(*(char**)r + 0x20))(r, &a);
        return 0;
    }
    return 0;
}
} } }
