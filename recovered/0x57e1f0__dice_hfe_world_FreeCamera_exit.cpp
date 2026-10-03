// FUNCTION: BF2 0x57e1f0
namespace dice { namespace hfe { namespace world {
void exit_0x57e1f0(void* self) {
    void* p = *(void**)((char*)self + 0x298);
    if (!p)
        return;
    void* q = *(void**)((char*)p + 8);
    if (!q)
        return;
    ((void (*)(void*, int, int))(*(void***)q)[0x13])(q, 0, -1);
    *(int*)((char*)self + 0x320) = 0;
    ((void (*)(void*, int, int))(*(void***)self)[0x18])(self, 0, 0x800);
}
} } }
