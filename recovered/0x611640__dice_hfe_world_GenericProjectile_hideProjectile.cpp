// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x611640
namespace dice { namespace hfe {

namespace world { class IObject; }
void disablePhysics(world::IObject* obj, bool recurse);
extern "C" void* g_game_10c5420;

namespace world {

class IProjectileObject;

template <class T> struct WeakPtrHandle {
    void release() { if (--refs == 0) delete this; }
    int refs;
    T* obj;
};

template <class T> class WeakPtr {
public:
    WeakPtr() : m_h(0) {}
    T* get() const { return m_h ? m_h->obj : 0; }
    void clear() { if (m_h) m_h->release(); m_h = 0; }
    WeakPtrHandle<T>* m_h;
};

struct Vec3 {
    float x, y, z;
    Vec3() : x(0.0f), y(0.0f), z(0.0f) {}
};

class IProj {
public:
    virtual void _v00(); virtual void _v08(); virtual void _v10(); virtual void _v18();
    virtual void _v20(); virtual void _v28(); virtual void _v30(); virtual void _v38();
    virtual void _v40(); virtual void _v48(); virtual void _v50(); virtual void _v58();
    virtual void _v60(); virtual void _v68(); virtual void _v70(); virtual void _v78();
    virtual void _v80(); virtual void _v88(); virtual void _v90(); virtual void _v98();
    virtual void _va0(); virtual void _va8(); virtual void _vb0(); virtual void _vb8();
    virtual void _vc0(); virtual void _vc8();
    virtual void setStartPos(Vec3 const&);
    virtual void _vd8(); virtual void _ve0(); virtual void _ve8();
    virtual void getHealEffect(Vec3 const&) const;
};

class GenericProjectile {
public:
    char _pad0[0x88];
    IProj* m_88;
    char _pad1[0x2c5 - 0x90];
    unsigned char m_2c5;
    char _pad2[0x348 - 0x2c6];
    WeakPtr<IProjectileObject> m_tracer;
    void stopEffects();
    void hideProjectile();
};

void GenericProjectile::hideProjectile() {
    *(unsigned char*)((char*)this + 0x2c5) = 1;
    ((void (*)(void*, int, int))(*(void***)this)[0xc0 / 8])(this, 0, 0x1502);
    ((void (*)(void*, int, int))(*(void***)this)[0x2e8 / 8])(this, 0, 0x1402);
    dice::hfe::disablePhysics((IObject*)this, false);

    IProj* child = m_88;
    if (child != 0) {
        child->setStartPos(Vec3());
        child->getHealEffect(Vec3());
    }

    WeakPtr<IProjectileObject>& w = m_tracer;
    if (w.m_h && w.m_h->obj) {
        IProjectileObject* o = w.m_h->obj;
        ((void (*)(void*, int))(*(void***)o)[0x38 / 8])(o, 0);
        IObject* r;
        if (w.m_h && w.m_h->obj)
            r = (IObject*)((char*)w.m_h->obj - 0x238);
        else
            r = 0;
        ((void (*)(void*, void*))(*(void***)g_game_10c5420)[0x140 / 8])(g_game_10c5420, r);
        w.clear();
    }
    stopEffects();
}

} } }
