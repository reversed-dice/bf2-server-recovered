// FUNCTION: BF2 0x59bfa0
namespace dice { namespace hfe { namespace world {
void fn_0x59bfa0(void* self) {
    void* p = *(void**)((char*)self + 0x230);
    if (p)
        ((void (*)(void*, int))(*(void***)p)[0])(p, 1);
}
} } }
