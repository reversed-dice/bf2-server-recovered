// FUNCTION: BF2 0x717ed0
namespace dice { namespace hfe { namespace world {
extern void* fn_71bed0(void* a, int b, int c);
void* getVertexVector_0x717f30(void* self, int idx) {
    if (*(char*)((char*)self + 0x20) == 1)
        ((void (*)(void*, int))(*(void***)self)[0xd])(self, 0);
    return fn_71bed0(*(void**)((char*)self + 0x18), *(int*)((char*)self + 0x24), idx);
}
} } }
