// FUNCTION: BF2 0x4ae110
namespace dice { namespace hfe {
struct Vec4 {
    Vec4() : x(0), y(0), z(0), w(0) {}
    void set(float x_, float y_, float z_, float w_) { x = x_; y = y_; z = z_; w = w_; }
    Vec4& operator=(const Vec4& o) { set(o.x, o.y, o.z, o.w); return *this; }
    float x, y, z, w;
};
struct Mat4 {
    Mat4() {}
    Mat4(const Mat4& o) { r[0] = o.r[0]; r[1] = o.r[1]; r[2] = o.r[2]; r[3] = o.r[3]; }
    Mat4& operator=(const Mat4& o) { r[0] = o.r[0]; r[1] = o.r[1]; r[2] = o.r[2]; r[3] = o.r[3]; return *this; }
    Vec4 r[4];
};
void getRotationZXY(Mat4 const& mat, float& a, float& b, float& c);

namespace world {
class IPlayerManager {
public:
    virtual void q0();  virtual void q1();  virtual void q2();  virtual void q3();
    virtual void q4();  virtual void q5();  virtual void q6();  virtual void q7();
    virtual void q8();  virtual void q9();  virtual void q10(); virtual void q11();
};
extern IPlayerManager* playerManager;
}

class ServerGameLogic {
public:
    void printCameraCoordToConsole() const;
};

void ServerGameLogic::printCameraCoordToConsole() const
{
    void* p = ((void* (*)(void*))(*(void***)world::playerManager)[0x60 / 8])(world::playerManager);
    if (p == 0)
        return;
    void* v = ((void* (*)(void*))(*(void***)p)[0x150 / 8])(p);
    if (v == 0)
        return;
    float* cam = (float*)((void* (*)(void*))(*(void***)v)[0x108 / 8])(v);
    Mat4 m = *(Mat4 const*)cam;
    float x, y, z;
    getRotationZXY(m, x, y, z);
}

} }
