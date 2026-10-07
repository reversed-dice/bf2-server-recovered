// FUNCTION: BF2 0x5b0ca0
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe {

template <class T> struct WeakPtrHandle {
    void release() { if (--refs == 0) delete this; }
    int refs;
    T* obj;
};

template <class T> class WeakPtr {
public:
    WeakPtr() : m_h(0) {}
    WeakPtr(const WeakPtr& o) : m_h(o.m_h) { if (m_h) ++m_h->refs; }
    WeakPtr& operator=(const WeakPtr& o)
    {
        if (o.m_h)
            ++o.m_h->refs;
        if (m_h)
            m_h->release();
        m_h = o.m_h;
        return *this;
    }
    ~WeakPtr() { if (m_h) m_h->release(); }
    T* get() const { return m_h ? m_h->obj : 0; }
    bool operator<(const WeakPtr& o) const { return m_h < o.m_h; }
    WeakPtrHandle<T>* m_h;
};

namespace world {

class IObject {
public:
    virtual void _m0();
    virtual void _m1();
    virtual void _m2();
    virtual void _m3();
    virtual void _m4();
    virtual void _m5();
    virtual void _m6();
    virtual WeakPtr<IObject> getWeakPtr(); // slot 7 = 0x38
};

class ArmorGLComp {
public:
    void setLastHitWeapon(IObject* obj);

    char _pad[0x40];
    WeakPtr<IObject> m_lastHitWeapon;
};

void ArmorGLComp::setLastHitWeapon(IObject* obj)
{
    if (obj) {
        m_lastHitWeapon = obj->getWeakPtr();
    } else {
        m_lastHitWeapon = WeakPtr<IObject>();
    }
}

} } }
