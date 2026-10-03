// FUNCTION: BF2 0x880fd0
namespace dice { namespace hfe { namespace anonymous_namespace {
extern void* g_playerManager;  // 0x0112ee38
typedef void* (*fn100_t)(void*);
typedef void (*fn118_t)(float, float, void*);
long executeObjectMethod_0x880fd0(void* p) {
    if (*(int*)((char*)p + 0x30) != 2) {
        return 0;
    }
    void* obj = 0;
    float a = **(float**)((char*)p + 0x38);
    float b = **(float**)((char*)p + 0x40);
    *(char*)((char*)p + 0x108) = 0;
    void* pm = g_playerManager;
    if (pm != 0) {
        obj = ((fn100_t)*(void**)((char*)*(void**)pm + 0x100))(pm);
    }
    void** v = *(void***)obj;
    ((fn118_t)v[0x118/8])(a, b, obj);
    return 0;
}
} } }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass260_executeObjectMethod (0x880fd0)
