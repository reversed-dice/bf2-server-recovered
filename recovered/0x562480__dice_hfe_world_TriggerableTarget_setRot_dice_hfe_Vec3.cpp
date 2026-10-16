// FUNCTION: BF2 0x562480
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
    Mat4& operator=(const Mat4& o)
    {
        r[0] = o.r[0];
        r[1] = o.r[1];
        r[2] = o.r[2];
        r[3] = o.r[3];
        return *this;
    }
    Vec4 r[4];
};

void setRotationZXY(Mat4& m, float a, float b, float c);

namespace world {

class TriggerableTarget {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual Mat4* getLocalMat();               // slot 33 = 0x108
    virtual void v34();
    virtual void setLocalMat(Mat4& m);         // slot 35 = 0x118
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual Mat4* getWorldMat();               // slot 58 = 0x1d0
    virtual void setWorldMat(Mat4& m);         // slot 59 = 0x1d8

    char _pad[0x48];
    void* m_50;   // 0x50

    void setRot(Vec3 rot);
};

void TriggerableTarget::setRot(Vec3 rot)
{
    void* src;
    if (m_50 == 0)
        src = getLocalMat();
    else
        src = getWorldMat();

    Mat4 mat;
    mat = *(Mat4*)src;

    setRotationZXY(mat, -rot.z, -rot.y, -rot.x);

    if (m_50 == 0)
        setLocalMat(mat);
    else
        setWorldMat(mat);
}

} } }
