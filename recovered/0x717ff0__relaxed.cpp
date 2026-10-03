// FUNCTION: BF2 0x717ff0
namespace dice { namespace hfe { namespace world {
extern void* fn_71c750(void* a, int b, int c);
void* getVertexCount_0x717ed0(void* self, int idx) {
    if (*(char*)((char*)self + 0x20) == 1)
        ((void (*)(void*, int))(*(void***)self)[0xd])(self, 0);
    return fn_71c750(*(void**)((char*)self + 0x18), *(int*)((char*)self + 0x24), idx);
}
} } }
