// FUNCTION: BF2 0x61fcd0
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
    WeakPtrHandle<T>* m_h;
};

namespace world {

class IObject {
public:
    virtual void addRef();
    virtual int getRef();
    virtual void release();
    virtual void queryInterface(unsigned int);
    virtual unsigned int getClassID() const;
    virtual ~IObject();
    virtual WeakPtr<IObject> getWeakPtr() const;
};

class WorldPref {
public:
    static unsigned int getTickCount();
};

class DefaultDetonationComp {
public:
    bool checkIfObjectCanTrigger(IObject* obj);
    char __pad_0x000[0x60];
};

class ReplenishDetonationComp : public DefaultDetonationComp {
public:
    WeakPtr<IObject> m_projectile;  // +0x60
    unsigned int m_tick;            // +0x68

    bool doReplenish(IObject*, bool);
    bool checkIfObjectCanTrigger(IObject*);
};

bool ReplenishDetonationComp::checkIfObjectCanTrigger(IObject* obj) {
    if (!DefaultDetonationComp::checkIfObjectCanTrigger(obj))
        return false;
    if (!doReplenish(obj, true))
        return false;
    m_projectile = obj->getWeakPtr();
    m_tick = WorldPref::getTickCount();
    return true;
}

} }
}
