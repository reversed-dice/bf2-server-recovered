// FUNCTION: BF2 0x5b1080
#include <list>
#include <map>
#include <vector>

namespace dice {
namespace hfe {
namespace world {

class RefCounted {
public:
    int m_refs;
    void addRef();
    void release()
    {
        if (--m_refs == 0) {
            delete this;
        }
    }
};

struct WeakPtr {
    RefCounted* m_h;
    ~WeakPtr()
    {
        if (m_h) {
            m_h->release();
        }
    }
};

struct DamageFromPlayer {
    char _d[0x30];
};

class IArmorGLComp {
public:
    virtual void vfun();
};

class ArmorGLComp : public IArmorGLComp {
public:
    struct HandledCollision {
        void* _p;
    };

    char _pad0[0x30];
    WeakPtr m_w0;
    WeakPtr m_w1;
    WeakPtr m_w2;
    char _pad1[0x290 - 0x50];
    std::list<DamageFromPlayer> m_l0;
    std::list<DamageFromPlayer> m_l1;
    std::list<WeakPtr> m_l2;
    char _pad2[0x2e8 - 0x2c0];
    std::map<int, std::vector<HandledCollision*>*> m_map;

    void StopAllEffects();
    virtual ~ArmorGLComp();
};

ArmorGLComp::~ArmorGLComp()
{
    StopAllEffects();
    for (std::map<int, std::vector<HandledCollision*>*>::iterator it = m_map.begin(); it != m_map.end(); ++it) {
        std::vector<HandledCollision*>* v = it->second;
        for (std::vector<HandledCollision*>::iterator p = v->begin(); p != v->end(); ++p) {
            delete *p;
        }
        delete v;
    }
}

} } }
