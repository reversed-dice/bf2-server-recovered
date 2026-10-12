// FUNCTION: BF2 0x6114e0
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe { namespace world {

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

class IProjectileObject {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    WeakPtr getWeakPtr() const;
};

class GenericProjectile {
public:
    char _pad0[0x348];
    WeakPtr m_tracer;
    void setAssociatedTracer(IProjectileObject* obj);
};

void GenericProjectile::setAssociatedTracer(IProjectileObject* obj) {
    m_tracer = obj->getWeakPtr();
    ((void (*)(void*, int, int))(*(void***)this)[0xc0 / 8])(this, 0x800, 0);
    ((void (*)(void*, int, int))(*(void***)this)[0x2e8 / 8])(this, 0x800, 0);
}

} } }
