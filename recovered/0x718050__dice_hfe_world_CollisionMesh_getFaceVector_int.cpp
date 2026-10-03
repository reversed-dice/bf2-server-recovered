// FUNCTION: BF2 0x718050
namespace dice { namespace hfe { namespace world {
extern void* fn_71bea0(void* a, int b, int c);
void* getFaceVector_0x718050(void* self, int idx) {
    if (*(char*)((char*)self + 0x20) == 1)
        ((void (*)(void*, int))(*(void***)self)[0xd])(self, 0);
    return fn_71bea0(*(void**)((char*)self + 0x18), *(int*)((char*)self + 0x24), idx);
}
} } }
