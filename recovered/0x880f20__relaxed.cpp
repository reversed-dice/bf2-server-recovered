// FUNCTION: BF2 0x880f20
namespace dice { namespace hfe { namespace anonymous_namespace {
extern void* g_gameLogic;  // 0x010b8c08
extern void func_0x00408238(void*, void*);  // string assign
typedef void* (*fna0_t)(void*, int);
long executeObjectMethod_0x880e80(void* p) {
    if (*(int*)((char*)p + 0x30) != 1) {
        return 0;
    }
    int u = **(int**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 1;
    void* gl = g_gameLogic;
    void* s = ((fna0_t)*(void**)((char*)*(void**)gl + 0x3f8))(gl, u);
    char* d = (char*)p + 0x110;
    func_0x00408238(d, s);
    return (long)d;
}
} } }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass163_executeObjectMethod (0x880e80)
