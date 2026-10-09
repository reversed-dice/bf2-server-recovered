// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x603f90
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
    virtual WeakPtr<IObject> getWeakPtr();
};
class TargetComp {
public:
    virtual void enable();
};
class LPTargetComp : public TargetComp {
public:
    void enable();
    char _pad48[0x40];
    WeakPtr<IObject> m_target;
    char _pad90[0x40];
    IObject* m_pTarget;
};

void LPTargetComp::enable()
{
    IObject* obj = *(IObject**)((char*)this + 0x90);
    if (obj)
        m_target = obj->getWeakPtr();
    else
        m_target = WeakPtr<IObject>();
    TargetComp::enable();
}
}}}
