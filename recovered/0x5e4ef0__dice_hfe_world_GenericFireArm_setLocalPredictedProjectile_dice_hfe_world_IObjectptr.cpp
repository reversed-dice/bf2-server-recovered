// FUNCTION: BF2 0x5e4ef0
#include <list>

namespace dice { namespace hfe { namespace world {

struct IObject;

class RefCounted {
public:
    int m_refs;
    void addRef() { ++m_refs; }
    void release() { if (--m_refs == 0) delete this; }
};

class WeakPtr {
public:
    RefCounted* m_h;
    WeakPtr() : m_h(0) {}
    WeakPtr(WeakPtr const& o) : m_h(o.m_h) { if (m_h) m_h->addRef(); }
    ~WeakPtr() { if (m_h) m_h->release(); }
    WeakPtr& operator=(WeakPtr const& o) {
        if (o.m_h) o.m_h->addRef();
        if (m_h) m_h->release();
        m_h = o.m_h;
        return *this;
    }
};

class IObject {
public:
    virtual void _v0();
    virtual void _v1();
    virtual void _v2();
    virtual void _v3();
    virtual void _v4();
    virtual void _v5();
    virtual void _v6();
    virtual WeakPtr getWeakPtr();
};

class GenericFireArm {
public:
    char _pad0x370[0x370];
    std::list<WeakPtr> m_predicted;
    void setLocalPredictedProjectile(IObject* obj);
};

void GenericFireArm::setLocalPredictedProjectile(IObject* obj)
{
    if (obj)
        m_predicted.push_back(obj->getWeakPtr());
}

} } }
