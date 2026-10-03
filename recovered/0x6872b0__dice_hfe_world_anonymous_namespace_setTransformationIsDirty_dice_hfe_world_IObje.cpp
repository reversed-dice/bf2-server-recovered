// FUNCTION: BF2 0x6872b0
namespace dice { namespace hfe { namespace world { namespace anonymous_namespace {
void setTransformationMatrixDirty_0x6872b0(void* self) {
    if (!self)
        return;
    int f = *(int*)((char*)self + 8);
    *(int*)((char*)self + 8) = f | 0x40200000;
    if ((f | 0x40200000) & 0x80000)
        return;
    *(int*)((char*)self + 8) = f | 0x50280000;
    void* c = ((void* (*)(void*))(*(void***)self)[0x3c])(self);
    while (c) {
        setTransformationMatrixDirty_0x6872b0(c);
        c = *(void**)((char*)c + 0x58);
    }
}
} } } }
