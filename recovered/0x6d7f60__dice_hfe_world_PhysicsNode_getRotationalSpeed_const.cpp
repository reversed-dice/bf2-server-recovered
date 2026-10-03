// FUNCTION: BF2 0x6d7f60
namespace dice { namespace hfe { namespace world {
extern void* fn_7340c0(void* a);
void* getPositionalSpeed_0x6f1060(void* self) {
    void* p = *(void**)((char*)self + 0x18);
    if (*(void**)((char*)p + 0x50) != 0)
        return fn_7340c0(self);
    return (char*)self + 0xa0;
}
} } }
