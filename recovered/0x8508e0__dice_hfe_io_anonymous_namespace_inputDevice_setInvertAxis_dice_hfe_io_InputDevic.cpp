// FUNCTION: BF2 0x8508e0
namespace dice { namespace hfe { namespace io { namespace anonymous_namespace {
extern void* fn_8508b0(void* a);
int setInvertAxis_0x8508e0(void* self, int axis, unsigned char val) {
    void* p = fn_8508b0(self);
    if (!p)
        return 0;
    ((void (*)(void*, int, int))(*(void***)p)[0xf])(p, axis, val);
    return 1;
}
} } } }
