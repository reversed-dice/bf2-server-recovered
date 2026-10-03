// FUNCTION: BF2 0x5842e0
namespace dice { namespace hfe { namespace world {
// 0x5842e0 OverheadCamera::forceSetPosition
extern "C" void* gameLogic;           // 0x010b8c08
extern "C" void* fn_69a1e0(void*);    // getRootParent
extern "C" void fn_583a30(void*, float, float, float);  // pan
extern "C" float DAT_00b2f3c0;
typedef char (*vfn0c)(void*);
typedef void (*vfn1v)(void*, void*);
int forceSetPosition_0x5842e0(void* self, const float* v) {
    void* gl = *(void**)&gameLogic;
    if (gl != 0 && ((vfn0c*)*(void***)gl)[0x278/8](gl) == 0) {
        return 0;
    }
    void* p = fn_69a1e0(self);
    float u1 = v[1];
    float u2 = v[2];
    void (*r8)(void*, void*) = ((vfn1v*)*(void***)p)[0xe0/8];
    float u0 = v[0];
    struct V { float x, y, z; } tmp;
    tmp.x = u0;
    tmp.y = u1;
    tmp.z = u2;
    r8(p, &tmp);
    fn_583a30(self, 0.0f, 0.0f, DAT_00b2f3c0);
    return 1;
}
} } }
