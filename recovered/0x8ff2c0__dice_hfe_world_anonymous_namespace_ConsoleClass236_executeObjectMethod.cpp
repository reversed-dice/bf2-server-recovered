// FUNCTION: BF2 0x8ff2c0
namespace dice { namespace hfe { namespace world {
extern const unsigned int CID_ObjectSpawnerTemplate;
extern void* objectManager;
typedef int (*CidFn)(void*);
typedef void (*F300)(void*, int);
class ConsoleClass236 {
public:
    virtual void* executeObjectMethod();
};
void* ConsoleClass236::executeObjectMethod() {
    if (*(int*)((char*)this + 0x30) != 1)
        return 0;
    int id = **(int**)((char*)this + 0x38);
    *(char*)((char*)this + 0x108) = 0;
    void* t = ((void* (*)(void*))(*(void***)dice::hfe::world::objectManager)[0x120 / 8])(
        dice::hfe::world::objectManager);
    void* q = (t != 0) ? *(void**)((char*)t + 0x28) : 0;
    void* r = (q != 0 && ((CidFn)(*(void***)q)[0x20 / 8])(q) == CID_ObjectSpawnerTemplate) ? t : 0;
    ((F300)(*(void***)r)[0x300 / 8])(r, id);
    return 0;
}
}}}
