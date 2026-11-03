// FUNCTION: BF2 0x52c810
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    void set(float ax, float ay, float az) { x = ax; y = ay; z = az; }
    Vec3& operator=(const Vec3& o) { set(o.x, o.y, o.z); return *this; }
    Vec3() {}
    Vec3(const Vec3& o) { set(o.x, o.y, o.z); }
};

struct Vec4 {
    Vec4() : x(0), y(0), z(0), w(0) {}
    void set(float x_, float y_, float z_, float w_) { x = x_; y = y_; z = z_; w = w_; }
    Vec4& operator=(const Vec4& o) { set(o.x, o.y, o.z, o.w); return *this; }
    float x, y, z, w;
};

struct Mat4 {
    Mat4() {}
    Mat4(const Mat4& o)
    {
        r[0] = o.r[0];
        r[1] = o.r[1];
        r[2] = o.r[2];
        r[3] = o.r[3];
    }
    Vec4 r[4];
};

extern "C" int IID_IPlayerControlObject;
extern "C" int IID_IObject;
extern "C" int IID_ICameraObject;
extern float* g_bottomMarginal;

void getRotationZXY(const Mat4& m, float& a, float& b, float& c);
void setRotationZXY(Mat4& m, float a, float b, float c);

namespace world {

class IPlayer;

typedef void* (*Fp)(void*);
typedef void* (*Fq)(void*, unsigned int);
typedef int   (*Fi)(void*);
typedef void  (*Fv)(void*);
typedef void  (*Fv2)(void*, int, int);
typedef void  (*Fv3)(void*, int, int, int);
typedef void  (*Fvi)(void*, int);
typedef void  (*Fvp)(void*, void*);

class Ladder {
public:
    float getLadderHeight();
    float getAbsoluteTop();
    float getAbsoluteBottom();
};

class Camera {
public:
    char _pad0[0x50];
    void* m_50;
};

class Comp {
public:
    char _pad0[0x88];
    void* m_88;
    void* m_90;
};

class Sub {
public:
    char _pad0[8];
    Comp* m_8;
};

inline void* camQI(Camera* c)
{
    return ((Fq)(*(void***)c)[0x18 / 8])(c, IID_ICameraObject);
}

inline const Mat4* camMatrix(Camera* c)
{
    if (c->m_50 != 0)
        return (const Mat4*)((Fp)(*(void***)c)[0x1d0 / 8])(c);
    return (const Mat4*)((Fp)(*(void***)c)[0x108 / 8])(c);
}

inline void camSetMatrix(Camera* c, Mat4* m)
{
    if (c->m_50 != 0)
        ((Fvp)(*(void***)c)[0x1d8 / 8])(c, m);
    else
        ((Fvp)(*(void***)c)[0x118 / 8])(c, m);
}

inline void camAdd(Camera* c, Vec3* v)
{
    ((Fvp)(*(void***)c)[0x300 / 8])(c, v);
}

class PlayerControlObject {
public:
    bool enter(IPlayer* player);
};

class LadderContainer : public PlayerControlObject {
public:
    char _pad0[0x270];
    Sub* m_270;
    char _pad1[0x600 - 0x278];
    Ladder* m_ladder;

public:
    bool _enter(IPlayer* player);
    Camera* getCamera();
};

template <class T> static inline T const& maxref(T const& a, T const& b) { return a > b ? a : b; }

bool LadderContainer::_enter(IPlayer* player)
{
    float bot;
    float low;
    float top;
    float az;
    float ay;
    float ax;
    struct YA { float y; float ang; } ya;
    Vec3 up;
    Vec3 zero;
    Vec3 pos;
    volatile Vec3 rot;

    void* pco = ((Fp)(*(void***)player)[0x90 / 8])(player);
    void* ipco = ((Fq)(*(void***)pco)[0x18 / 8])(pco, IID_IPlayerControlObject);
    void* start = ((Fp)(*(void***)pco)[0xd8 / 8])(pco);
    Vec3* lp = (Vec3*)((Fp)(*(void***)m_ladder)[0xd8 / 8])(m_ladder);
    m_ladder->getLadderHeight();
    top = m_ladder->getAbsoluteTop();
    low = *(float*)((char*)start + 4) - 1.0f;
    const float* pf = &low;
    if (top < low)
        pf = &top;
    bot = m_ladder->getAbsoluteBottom() + *g_bottomMarginal;
    ya.y = maxref(*pf, bot);
    ya.y = ya.y - lp->y;

    void* ent = ((Fp)(*(void***)pco)[0x360 / 8])(pco);
    void* obj = ((Fq)(*(void***)ent)[0x18 / 8])(ent, IID_IObject);
    if (obj == 0) {
        rot.x = 0.0f; rot.y = 0.0f; rot.z = 0.0f;
    } else {
        const Mat4& m = *(const Mat4*)((Fp)(*(void***)obj)[0x1d0 / 8])(obj);
        getRotationZXY(m, az, ay, ax);
        ((Vec3&)rot).set(-ax, -ay, -az);
    }
    int mode = ((Fi)(*(void***)ent)[0x38 / 8])(ent);
    ((Fvp)(*(void***)ipco)[0x50 / 8])(ipco, this);
    bool ret = this->PlayerControlObject::enter(player);

    Fvp fn = (Fvp)(*(void***)this)[0xe0 / 8];
    pos.set(0.0f + lp->x, ya.y + lp->y, lp->z + 0.0f);
    fn(this, &pos);

    Sub*& sub = m_270;
    if (sub != 0 && sub->m_8 != 0) {
        Comp* c = sub->m_8;
        ((Fv2)(*(void***)c)[0xc0 / 8])(c, 0, 1);
        ((Fv2)(*(void***)this)[0xc0 / 8])(this, 0x800, 0);
        Comp* a = sub ? sub->m_8 : 0;
        ((Fvi)(*(void***)a->m_88)[0x230 / 8])(a->m_88, 1);
        Comp* b = sub ? sub->m_8 : 0;
        ((Fv)(*(void***)b->m_90)[0x40 / 8])(b->m_90);
        Comp* d = sub ? sub->m_8 : 0;
        void* m90 = d->m_90;
        Fvp fn2 = (Fvp)(*(void***)m90)[0x110 / 8];
        zero.set(0.0f, 0.0f, 0.0f);
        fn2(m90, &zero);
    }

    if (getCamera() == 0)
        return ret;
    float* ry = (float*)&rot.y;
    void* co = camQI(getCamera());
    ((Fv3)(*(void***)co)[0x30 / 8])(co, mode, 0, 0);
    ya.ang = *ry;
    Camera* cam = getCamera();
    Mat4 mat = *camMatrix(cam);
    setRotationZXY(mat, -0.0f, -ya.ang, -0.0f);
    camSetMatrix(cam, &mat);
    Camera* c3 = getCamera();
    Fvp fn3 = (Fvp)(*(void***)c3)[0x300 / 8];
    up.set(0.0f, *ry, 0.0f);
    fn3(c3, &up);
    return ret;
}

} } }
