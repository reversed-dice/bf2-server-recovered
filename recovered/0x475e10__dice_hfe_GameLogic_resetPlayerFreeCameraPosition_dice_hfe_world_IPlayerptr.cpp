// FUNCTION: BF2 0x475e10
// BF2_FLAGS: -fno-strict-aliasing
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

Mat4* getIdentity();
void setRotationZXY(Mat4& m, float a, float b, float c);

namespace world { class IPlayer; }

class GameLogic {
public:
    void resetPlayerFreeCameraPosition(world::IPlayer* player);
};

void GameLogic::resetPlayerFreeCameraPosition(world::IPlayer* player)
{
    if (player == 0)
        return;
    void* s = ((void* (*)(void*))((*(void***)player)[0x150 / 8]))(player);
    if (s == 0)
        return;
    Mat4 m = *getIdentity();
    Vec3 u;
    Vec3 v;
    ((void (*)(void*, void*))((*(void***)this)[0x420 / 8]))(&v, this);
    setRotationZXY(m, -v.z, -v.y, -v.x);
    ((void (*)(void*, void*))((*(void***)this)[0x418 / 8]))(&u, this);
    Vec3* p = (Vec3*)&m.r[3];
    p->x = u.x;
    p->y = u.y;
    p->z = u.z;
    ((void (*)(void*, void*))((*(void***)s)[0x118 / 8]))(s, &m);
    ((void (*)(void*, int, int, int))((*(void***)s)[0x310 / 8]))(s, 1, 0, 0);
}

} }
