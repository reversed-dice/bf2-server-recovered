// FUNCTION: BF2 0x786700
// BF2_FLAGS: -fno-strict-aliasing
#include <new>

namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    Vec3() : x(0), y(0), z(0) {}
};

namespace ai {

class IAIObject {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void* getObject();
};

class AITemplateMobile {};

class IAIObjectMobile {
public:
    IAIObjectMobile(IAIObject* obj);
    virtual ~IAIObjectMobile();
    char _pad_base[8];
};

class MobileInner {
public:
    virtual ~MobileInner();
    void* m_owner;
    MobileInner(void* owner) : m_owner(owner) {}
};

class AIObjectMobile : public IAIObjectMobile {
public:
    AIObjectMobile(IAIObject* obj, AITemplateMobile* tpl);
    virtual ~AIObjectMobile();

    Vec3 m_vec; // +0x10 .. +0x1c
    AITemplateMobile* m_tpl; // +0x20
    void* _pad; // +0x28
    void* m_inner; // +0x30
    void* m_obj; // +0x38
};

AIObjectMobile::AIObjectMobile(IAIObject* obj, AITemplateMobile* tpl)
    : IAIObjectMobile(obj), m_vec(), m_tpl(tpl)
{
    m_obj = obj->getObject();
    m_inner = new MobileInner(this);
}

} } }
