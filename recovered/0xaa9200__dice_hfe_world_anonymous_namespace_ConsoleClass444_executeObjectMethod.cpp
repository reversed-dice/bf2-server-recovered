// FUNCTION: BF2 0xaa9200
namespace dice { namespace hfe { namespace world {
extern void* playerManager;
typedef void* (*SlotFn)(void*);
class ConsoleClass444 {
public:
    virtual void* executeObjectMethod();
};
void* ConsoleClass444::executeObjectMethod() {
    if (*(int*)((char*)this + 0x30) != 2)
        return 0;
    void* a = **(void***)((char*)this + 0x38);
    int b = **(int**)((char*)this + 0x40);
    *(char*)((char*)this + 0x108) = 1;
    void* pm = ((SlotFn)(*(void***)dice::hfe::world::playerManager)[0x100 / 8])(
        dice::hfe::world::playerManager);
    char res = ((char (*)(void*, void*, int))(*(void***)pm)[0x98 / 8])(pm, a, b);
    *(char*)((char*)this + 0x10a) = res;
    return (char*)((char*)this + 0x10a);
}
}}}
