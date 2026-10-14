// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x614b00
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
    void clear() { if (m_h) m_h->release(); m_h = 0; }
};

class IObject {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual WeakPtr getWeakPtr();
};

extern void* objectManager;

class GenericProjectile {
public:
    char _pad0[0x350];
    WeakPtr m_localPredicted;
    void stopEffects();
    void setLocalPredictedProjectile(IObject* obj);
};

void GenericProjectile::setLocalPredictedProjectile(IObject* obj) {
    if (obj == 0) {
        m_localPredicted = WeakPtr();
        return;
    }
    WeakPtr& w = m_localPredicted;
    RefCounted* h = w.m_h;
    if (h && *(void**)((char*)h + 8))
        ((void (*)(void*, void*))(*(void***)objectManager)[0x28 / 8])(objectManager, *(void**)((char*)h + 8));
    w = obj->getWeakPtr();
    *(char*)((char*)obj + 0x36a) = 0;
    stopEffects();
    ((void (*)(void*, int, int))(*(void***)this)[0xc0 / 8])(this, 0, 0x100);
    ((void (*)(void*, int, int))(*(void***)this)[0xc0 / 8])(this, 0, 2);
}

} } }
