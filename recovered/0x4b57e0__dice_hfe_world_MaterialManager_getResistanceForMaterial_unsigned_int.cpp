// FUNCTION: BF2 0x4b57e0
namespace dice { namespace hfe { namespace world {
float getResistanceForMaterial_0x4b57e0(void* self, int idx) {
    void* m = ((void* (*)(void*, int))(*(void***)self)[0x9])(self, idx);
    if (!m)
        m = ((void* (*)(void*, int))(*(void***)self)[0x9])(self, 0);
    if (!m)
        return 1.0f;
    return ((float (*)(void*))(*(void***)m)[0xb])(m);
}
} } }
