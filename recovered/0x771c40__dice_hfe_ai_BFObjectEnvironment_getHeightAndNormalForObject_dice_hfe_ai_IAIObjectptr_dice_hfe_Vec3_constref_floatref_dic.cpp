// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x771c40
namespace dice { namespace hfe { namespace ai {

extern void* m_iaiTerrain;

struct Vec3 { float x; float y; float z; };

long getHeightAndNormalForObject_0x771c40(void* self, void* obj, Vec3 const& in, float& outFloat, Vec3& normal, float& height) {
    void* terr = ((void* (*)(void*))(*(void***)obj)[0x128/8])(obj);
    float h = ((float (*)(void*))(*(void***)terr)[0x88/8])(terr);
    height = h;
    ((void (*)(void*))(*(void***)obj)[0x1a8/8])(obj);
    ((void (*)(void*, int))(*(void***)obj)[0x148/8])(obj, 0x15);
    float nbuf[3];
    nbuf[0] = 0.0f;
    nbuf[1] = 0.0f;
    nbuf[2] = 0.0f;
    char tail;
    float r = ((float (*)(void*, float, float, float*, char*))(*(void***)m_iaiTerrain)[0x50/8])(m_iaiTerrain, in.x, in.z, nbuf, &tail);
    outFloat = r;
    normal.x = nbuf[0];
    normal.y = nbuf[1];
    normal.z = nbuf[2];
    return 0;
}

} } }
