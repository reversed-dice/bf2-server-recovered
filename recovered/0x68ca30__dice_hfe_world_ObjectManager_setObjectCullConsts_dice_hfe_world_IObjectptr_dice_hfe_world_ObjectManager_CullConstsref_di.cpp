// FUNCTION: BF2 0x68ca30
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe { namespace world {

class ITemplate {
public:
    virtual void t0(); virtual void t1(); virtual void t2(); virtual void t3();
    virtual unsigned int getClassID();
    virtual void t5(); virtual void t6(); virtual void t7(); virtual void t8();
    virtual void t9(); virtual void t10(); virtual void t11(); virtual void t12();
    virtual void t13(); virtual void t14(); virtual void t15(); virtual void t16();
    virtual void t17(); virtual void t18(); virtual void t19(); virtual void t20();
    virtual void t21(); virtual void t22(); virtual void t23(); virtual void t24();
    virtual void t25(); virtual void t26(); virtual void t27(); virtual void t28();
    virtual float t29();
};

class IObject {
public:
    virtual void i0(); virtual void i1(); virtual void i2(); virtual void i3();
    virtual void i4(); virtual void i5(); virtual void i6(); virtual void i7();
    virtual void i8(); virtual void i9(); virtual void i10(); virtual void i11();
    virtual void i12(); virtual void i13(); virtual void i14(); virtual void i15();
    virtual void i16(); virtual void i17(); virtual void i18(); virtual void i19();
    virtual void i20(); virtual void i21(); virtual void i22(); virtual void i23();
    virtual void i24(); virtual void i25(); virtual void i26(); virtual void i27();
    virtual void i28(); virtual void i29(); virtual void i30(); virtual void i31();
    virtual void i32(); virtual void i33(); virtual void i34(); virtual void i35();
    virtual void i36();
    virtual float getRadius();
    char _pad[0x20];
    ITemplate* m_template;
};

struct CullConsts {
    float m_0;
    float m_4;
    float m_8;
    float m_c;
    float m_10;
    float m_14;
    float m_18;
    float m_1c;
    float m_20;
};

class ObjectManager {
public:
    char _pad0[0x294];
    float m_294;
    float m_298;
    void setObjectCullConsts(IObject* obj, CullConsts& a, CullConsts& b);
};

extern unsigned int CID_PlayerControlObjectTemplate;
extern unsigned int CID_SoldierTemplate;

static float subCullConstScale = 1.0f;
static float subMinCullDistanceScale = 1.0f;
static float subRadiusThreshold = 1.0f;

void ObjectManager::setObjectCullConsts(IObject* obj, CullConsts& a, CullConsts& b)
{
    unsigned int cid = obj->m_template->getClassID();
    float d1 = m_294 * m_294 * a.m_8;
    float d2 = m_298 * m_298 * a.m_8;
    if (cid == CID_PlayerControlObjectTemplate || cid == CID_SoldierTemplate)
        a.m_c = d2;
    else
        a.m_c = d1;
    b.m_c = d1 * subCullConstScale;
    b.m_0 = subMinCullDistanceScale * a.m_0;
    float r = obj->getRadius() * obj->m_template->t29() * subRadiusThreshold;
    b.m_20 = r;
    a.m_20 = r;
}

}}}
