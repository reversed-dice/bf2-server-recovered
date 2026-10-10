// FUNCTION: BF2 0x90aa50
namespace dice { namespace hfe { namespace world {
extern void* objectManager;
extern unsigned int CID_ObjectSpawnerTemplate;
struct ConsoleClass241 {
    char _p0[0x30];
    int m_argc;
    char _p1[0x108 - 0x34];
    unsigned char m_hasResult;
    char _p2[1];
    int m_result;
    void* executeObjectMethod();
};
void* ConsoleClass241::executeObjectMethod() {
    if (m_argc != 1) return 0;
    int v = **(int**)((char*)this + 0x38);
    m_hasResult = 0;
    void* o = ((void* (*)(void*))(*(void***)objectManager)[0x120 / 8])(objectManager);
    void* s = o != 0 ? *(void**)((char*)o + 0x28) : 0;
    void* t = (s != 0 && ((unsigned int (*)(void*))(*(void***)s)[0x20 / 8])(s) == CID_ObjectSpawnerTemplate) ? o : 0;

    ((void (*)(void*, int))(*(void***)t)[0x350 / 8])(t, v);
    return 0;
}
} } }
