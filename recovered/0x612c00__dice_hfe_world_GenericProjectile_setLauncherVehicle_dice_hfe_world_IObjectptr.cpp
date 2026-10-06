// FUNCTION: BF2 0x612c00
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

class GenericProjectile {
public:
    void setLauncherVehicle(IObject* vehicle);

    char _pad[0x2a8];
    WeakPtr<IObject> m_weapon;
    char _pad2[8];
    WeakPtr<IObject> m_vehicle;
};

void GenericProjectile::setLauncherVehicle(IObject* vehicle)
{
    if (vehicle) {
        m_vehicle = vehicle->getWeakPtr();
    } else {
        m_weapon = WeakPtr<IObject>();
    }
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericProjectile_setLauncherVehicle_dice_hfe_world_IObjectptr (0x612c00)
