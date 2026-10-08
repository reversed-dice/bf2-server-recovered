// FUNCTION: BF2 0x62af10
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe { namespace world {

extern unsigned int IID_IProjectileObject;

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
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void* queryInterface(unsigned int iid);
};

class IProjectileObject {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    WeakPtr getWeakPtr() const;
};

}}}
using dice::hfe::world::IObject;
using dice::hfe::world::IProjectileObject;
using dice::hfe::world::WeakPtr;

extern "C" void fire_0x62af10(void* self, void* ev) {
    IObject* o = *(IObject**)((char*)ev + 8);
    if (o == 0) return;
    IProjectileObject* obj = (IProjectileObject*)o->queryInterface(dice::hfe::world::IID_IProjectileObject);
    if (obj == 0) return;
    *(WeakPtr*)((char*)self + 0x38) = obj->getWeakPtr();
}
