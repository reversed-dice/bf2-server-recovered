// FUNCTION: BF2 0x69a4d0
namespace dice { namespace hfe { namespace world {
void* getGeometry_0x69a4d0(void* self, void* out) {
    void* p = *(void**)((char*)self + 0x70);
    if (p) {
        if (out)
            *(void**)out = self;
        return p;
    }
    void* q = ((void* (*)(void*, int))(*(void***)self)[0x3])(self, *(int*)0x00c7d110);
    return *(void**)((char*)q + 0x70);
}
} } }
