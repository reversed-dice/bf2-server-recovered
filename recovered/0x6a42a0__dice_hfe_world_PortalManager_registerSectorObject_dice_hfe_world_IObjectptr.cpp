// FUNCTION: BF2 0x6a42a0
#include <set>
namespace dice { namespace hfe { namespace world {

class Sector { public: Sector(); char _pad[0x58]; };
class IObject {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8) V(9) V(10) V(11) V(12) V(13) V(14) V(15)
    V(16) V(17) V(18) V(19) V(20) V(21)
#undef V
    virtual void setComponent(int id, void* comp);
};
extern int g_sectorComponentId;

class PortalManager {
public:
    void registerSectorObject(IObject* o);
    char _pad0[0x40];
    std::set<IObject*> m_sectorObjects;
};

void PortalManager::registerSectorObject(IObject* o)
{
    Sector* s = new Sector();
    o->setComponent(g_sectorComponentId, s);
    m_sectorObjects.insert(o);
}

} } }
