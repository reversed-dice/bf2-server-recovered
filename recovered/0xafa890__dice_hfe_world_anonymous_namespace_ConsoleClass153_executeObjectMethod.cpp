// FUNCTION: BF2 0xafa890
#include <string>
namespace dice { namespace hfe { namespace world {
void* getHeightmapClusterEditable();
class ConsoleClass153 {
public:
    virtual void* executeObjectMethod();
};
void* ConsoleClass153::executeObjectMethod() {
    if (*(int*)((char*)this + 0x30) != 1)
        return 0;
    std::string s(**(std::string**)((char*)this + 0x38));
    *(char*)((char*)this + 0x108) = 0;
    void* h = getHeightmapClusterEditable();
    ((void (*)(void*, std::string))(*(void***)h)[0x98 / 8])(h, s);
    return 0;
}
}}}
