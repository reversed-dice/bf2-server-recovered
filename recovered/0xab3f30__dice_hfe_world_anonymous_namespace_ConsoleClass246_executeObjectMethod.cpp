// FUNCTION: BF2 0xab3f30
#include <string>
namespace dice { namespace hfe { namespace world {
extern void* objectManager;
typedef void* (*SlotFn)(void*);
class ConsoleClass246 {
public:
    virtual void* executeObjectMethod();
};
void* ConsoleClass246::executeObjectMethod() {
    int mode = *(int*)((char*)this + 0x30);
    if (mode == 0) {
        *(char*)((char*)this + 0x108) = 1;
        void* t = ((SlotFn)(*(void***)objectManager)[0x120 / 8])(objectManager);
        std::string* src = (std::string*)((void* (*)(void*))(*(void***)t)[0xc8 / 8])(t);
        ((std::string*)((char*)this + 0x110))->assign(*src);
        return (char*)this + 0x110;
    }
    if (mode == 1) {
        std::string s(**(std::string**)((char*)this + 0x38));
        *(char*)((char*)this + 0x108) = 0;
        void* t = ((SlotFn)(*(void***)objectManager)[0x120 / 8])(objectManager);
        ((void (*)(void*, std::string const&))(*(void***)t)[0xd0 / 8])(t, s);
    }
    return 0;
}
}}}
