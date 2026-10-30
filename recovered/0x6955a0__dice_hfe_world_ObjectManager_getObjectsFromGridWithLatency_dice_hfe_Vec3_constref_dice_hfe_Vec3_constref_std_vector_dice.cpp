// FUNCTION: BF2 0x6955a0
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>
#include <utility>

extern "C" void abort() __attribute__((noreturn));

namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
};

namespace world {

class IObject;

class LatencyCompensation {
public:
    static char m_isEnabled;
};

class ObjectPredicator {
public:
    virtual bool accepts(IObject*) const;
};

class Grid {
public:
    virtual void g0();
    virtual void g1();
    virtual void g2();
    virtual void g3();
    virtual void g4();
    virtual void g5();
    virtual void g6();
    virtual void g7();
    virtual void g8();
    virtual void g9();
    virtual void g10();
    virtual void g11();
    virtual void g12();
    virtual void query(const Vec3& min, const Vec3& max, std::vector<std::pair<float, IObject*> >& out);
};

class ObjectManager {
public:
    char _pad0[0x20];
    Grid* m_gridA;
    char _pad1[0x10];
    Grid* m_gridB;
    char _pad2[0xa8];
    std::vector<std::pair<float, IObject*> > m_objects;

    void getObjectsFromGridWithLatency(const Vec3& min, const Vec3& max, std::vector<IObject*>& out, ObjectPredicator* pred);
};

void ObjectManager::getObjectsFromGridWithLatency(const Vec3& min, const Vec3& max, std::vector<IObject*>& out, ObjectPredicator* pred)
{
    if (!LatencyCompensation::m_isEnabled) {
        abort();
    }
    m_objects.resize(0);
    m_gridA->query(min, max, m_objects);
    m_gridB->query(min, max, m_objects);
    out.resize(0);
    for (std::vector<std::pair<float, IObject*> >::iterator it = m_objects.begin(); it != m_objects.end(); ++it) {
        IObject* obj = it->second;
        if (pred == 0 || pred->accepts(obj)) {
            out.push_back(obj);
        }
    }
    m_objects.resize(0);
}

} } }
