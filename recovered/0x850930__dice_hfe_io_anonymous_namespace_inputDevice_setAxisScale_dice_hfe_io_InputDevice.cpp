// FUNCTION: BF2 0x850930
namespace dice { namespace hfe { namespace io { namespace anonymous_namespace {
extern void* fn_8508b0(void);
bool setAxisScale_0x850930(void* self, int axis, float v) {
    float f = v;
    void* d = fn_8508b0();
    if (!d)
        return false;
    ((void (*)(void*, int, float))(*(void***)d)[0x11])(d, axis, f);
    return true;
}
} } } }
