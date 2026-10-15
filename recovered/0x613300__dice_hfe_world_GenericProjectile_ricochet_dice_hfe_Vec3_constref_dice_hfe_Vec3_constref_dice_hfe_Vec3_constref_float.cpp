// FUNCTION: BF2 0x613300
namespace dice { namespace hfe {

class Random;
extern Random Rand;

class RandomDistribution {
public:
    float getValue(Random& r) const;
};

struct Vec3 { float x, y, z; };

namespace world {

class Helper {
public:
    virtual void _h0();
    virtual void _h1();
    virtual void _h2();
    virtual void _h3();
    virtual void _h4();
    virtual void _h5();
    virtual void _h6();
    virtual void _h7();
    virtual void _h8();
    virtual bool vt48(const Vec3& a, const Vec3& b, const Vec3& c, float f, float g, float h,
                      void* p, void* q, void* r);
};

class Other {
public:
    virtual void _o0();
    virtual void _o1();
    virtual void _o2();
    virtual void _o3();
    virtual void _o4();
    virtual void _o5();
    virtual void _o6();
    virtual void _o7();
    virtual void _o8();
    virtual void _o9();
    virtual void _o10();
    virtual void _o11();
    virtual void _o12();
    virtual void _o13();
    virtual void _o14();
    virtual void _o15();
    virtual void _o16();
    virtual void _o17();
    virtual bool vt90();
};

struct LifeHolder {
    unsigned char m_pad[0x208];
    RandomDistribution m_dist;
    unsigned char m_pad2[0x6f];
    float m_val278;
};

class GenericProjectile {
public:
    virtual void _v0();
    virtual void _v1();
    virtual void _v2();
    virtual void _v3();
    virtual void _v4();
    virtual void _v5();
    virtual void _v6();
    virtual void _v7();
    virtual void _v8();
    virtual void _v9();
    virtual void _v10();
    virtual void _v11();
    virtual void _v12();
    virtual void _v13();
    virtual void _v14();
    virtual void _v15();
    virtual void _v16();
    virtual void _v17();
    virtual void _v18();
    virtual void _v19();
    virtual void _v20();
    virtual void _v21();
    virtual void _v22();
    virtual void _v23();
    virtual void _v24();
    virtual void _v25();
    virtual void _v26();
    virtual void _v27();
    virtual void _v28();
    virtual void _v29();
    virtual void _v30();
    virtual void _v31();
    virtual void _v32();
    virtual void _v33();
    virtual void _v34();
    virtual void _v35();
    virtual void _v36();
    virtual void _v37();
    virtual void _v38();
    virtual void _v39();
    virtual void _v40();
    virtual void _v41();
    virtual void _v42();
    virtual void _v43();
    virtual void _v44();
    virtual void _v45();
    virtual void _v46();
    virtual void _v47();
    virtual void _v48();
    virtual void _v49();
    virtual void _v50();
    virtual void _v51();
    virtual void _v52();
    virtual void _v53();
    virtual void _v54();
    virtual void _v55();
    virtual void _v56();
    virtual void _v57();
    virtual void _v58();
    virtual void _v59();
    virtual void _v60();
    virtual void _v61();
    virtual void _v62();
    virtual void _v63();
    virtual void _v64();
    virtual void vt208(int a, int b, int c);

    bool ricochet(const Vec3& a, const Vec3& b, const Vec3& c, float f);

    unsigned char m_pad[0x250];
    LifeHolder* m_holder;
    Other* m_p260;
    unsigned char m_pad2[0x18];
    Helper* m_p280;
    unsigned char m_pad3[0x48];
    unsigned char m_x2d0[0x20];
    unsigned char m_x2f0[0x18];
    unsigned char m_x308[0x20];
};

bool GenericProjectile::ricochet(const Vec3& a, const Vec3& b, const Vec3& c, float f)
{
    if (m_p280 != 0) {
        if (m_p280->vt48(a, b, c, f, m_holder->m_val278,
                         m_holder->m_dist.getValue(Rand),
                         &m_x2d0, &m_x2f0, &m_x308))
            return true;
    }
    if (m_p260 != 0) {
        if (m_p260->vt90())
            return true;
    }
    vt208(0x1f, 0, 0);
    return false;
}

} } }
