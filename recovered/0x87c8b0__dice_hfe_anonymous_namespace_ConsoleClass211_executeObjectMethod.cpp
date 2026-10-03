// FUNCTION: BF2 0x87c8b0
namespace dice { namespace hfe { namespace anonymous_namespace {
extern void* g_gameLogic;
long executeObjectMethod_0x87c8b0(void* self) {
    if (*(int*)((char*)self + 0x30) != 0)
        goto mode1;
    *(char*)((char*)self + 0x108) = 1;
    void* gl = g_gameLogic;
    float v = ((float (*)(void*))(*(void***)gl)[0x2a])(gl);
    *(float*)((char*)self + 0x10c) = v;
    return (long)((char*)self + 0x10c);
mode1:
    if (*(int*)((char*)self + 0x30) != 1)
        return 0;
    float id = *(float*)(*(float**)((char*)self + 0x38));
    *(char*)((char*)self + 0x108) = 0;
    void* gl2 = g_gameLogic;
    ((void (*)(void*, float))(*(void***)gl2)[0x29])(gl2, id);
    return 0;
}
} } }
