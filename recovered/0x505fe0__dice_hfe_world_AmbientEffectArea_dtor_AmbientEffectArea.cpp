// FUNCTION: BF2 0x505fe0
// BF2_FLAGS: -fno-strict-aliasing
#include <list>

namespace dice { namespace hfe { namespace world {

class IObject {
public:
    virtual ~IObject();
#define V(n) virtual void _v##n();
    V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8) V(9) V(10)
    V(11)
#undef V
    virtual void destroy(bool);
};

template<typename T>
class WeakPtr {
public:
    struct Ref {
        char _pad[8];
        T* ptr;
    };
    Ref* m_ref;

    T* get() const {
        if (m_ref)
            return m_ref->ptr;
        return 0;
    }
};

class AmbientEffectArea;

class AmbientEffectAreaManager {
public:
    static AmbientEffectAreaManager* m_instance;
    void removeAmbientEffectArea(AmbientEffectArea*);
};

class BaseA {
public:
    virtual ~BaseA();
    char _pad[0xF8];
};

class BaseB {
public:
    virtual ~BaseB();
    char _pad[0x130];
};

class Bundle : public BaseA, public BaseB {
public:
    virtual ~Bundle();
};

class AmbientEffectArea : public Bundle {
public:
    virtual ~AmbientEffectArea();

    int m_unk238;
    char _pad23c[4];
    void* m_template;
    std::list<WeakPtr<IObject> > m_list;
};

AmbientEffectArea::~AmbientEffectArea()
{
    for (std::list<WeakPtr<IObject> >::iterator it = m_list.begin(); it != m_list.end(); ++it) {
        if (IObject* obj = it->get()) {
            obj->destroy(true);
        }
    }
    m_list.clear();
    AmbientEffectAreaManager* const& ref = AmbientEffectAreaManager::m_instance;
    if (ref) {
        ref->removeAmbientEffectArea(this);
    }
}

} } }
