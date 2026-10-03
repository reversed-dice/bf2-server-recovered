// FUNCTION: BF2 0x6f1080
namespace dice { namespace hfe { namespace world {
extern void* fn_7340c0(void* a);
void* getRotationalSpeed_0x6f1080(void* self) {
    void* p = *(void**)((char*)self + 0x18);
    if (*(void**)((char*)p + 0x50) != 0)
        return fn_7340c0(self);
    return (char*)self + 0xa0;
}
} } }
