// FUNCTION: BF2 0x58b800
namespace dice { namespace hfe { namespace world {

struct Vec3 {
    float x; float y; float z;
    Vec3() {}
    Vec3(float a, float b, float c) : x(a), y(b), z(c) {}
    Vec3(const Vec3&) {}
    ~Vec3() {}
};

class Anchor {
public:
    virtual void a00(); virtual void a01(); virtual void a02(); virtual void a03();
    virtual void a04(); virtual void a05();
    virtual void* a06();
    virtual void a07(); virtual void a08(); virtual void a09(); virtual void a10();
    virtual void a11(); virtual void a12(); virtual void a13(); virtual void a14();
    virtual void a15(); virtual void a16(); virtual void a17(); virtual void a18();
    virtual void a19(); virtual void a20(); virtual void a21(); virtual void a22();
    virtual void a23(); virtual void a24(); virtual void a25(); virtual void a26();
    virtual void a27(); virtual void a28(); virtual void a29(); virtual void a30();
    virtual bool isReady();
    virtual void a32(); virtual void a33(); virtual void a34(); virtual void a35();
    virtual void a36(); virtual void a37(); virtual void a38(); virtual void a39();
    virtual void a40(); virtual void a41();
    virtual Vec3 getPos(void* arg);
};

struct TmplApi {
    void (*p0)(); void (*p1)(); void (*p2)(); void (*p3)(); void (*p4)(); void (*p5)();
    void* (*getTemplate)(int, void*);
};

extern TmplApi* g_tmplApi;

class SOTBase {
public:
    virtual void s00(); virtual void s01(); virtual void s02(); virtual void s03();
    virtual void s04(); virtual void s05(); virtual void s06(); virtual void s07();
    virtual void s08(); virtual void s09(); virtual void s10(); virtual void s11();
    virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15();
    virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19();
    virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23();
    virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27();
    virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31();
    virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35();
    virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39();
    virtual const Vec3& getA() const;
    virtual void s41();
    virtual const Vec3& getB() const;
};

class SimpleObjectTemplate : public SOTBase {
public:
    char _pad[0x170];
    char m_field_178[32];

    Vec3 getAnchorPos() const;
};

Vec3 SimpleObjectTemplate::getAnchorPos() const {
    Anchor* a = (Anchor*)g_tmplApi->getTemplate(0, (void*)&m_field_178);
    if (!(a != 0 && a->isReady())) {
        const Vec3& p = getB();
        const Vec3& q = getA();
        return Vec3(q.x + p.x, q.y + p.y, q.z + p.z);
    }
    const Vec3& p = getB();
    Vec3 tmp = a->getPos((void*)&getA());
    return Vec3(tmp.x + p.x, tmp.y + p.y, tmp.z + p.z);
}

} } }
