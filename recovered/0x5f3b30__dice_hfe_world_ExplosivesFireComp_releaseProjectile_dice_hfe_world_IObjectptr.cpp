// FUNCTION: BF2 0x5f3b30
#include <set>

namespace dice { namespace hfe { namespace world {

class IObject;

class ExplosivesFireComp {
public:
    bool releaseProjectile(dice::hfe::world::IObject* obj);

    char m_pad0[0x178];
    std::set<dice::hfe::world::IObject*> m_objects;   // +0x178
};

bool ExplosivesFireComp::releaseProjectile(dice::hfe::world::IObject* obj)
{
    std::set<dice::hfe::world::IObject*>::iterator it = m_objects.find(obj);
    if (it == m_objects.end()) return false;
    m_objects.erase(it);
    return true;
}

} } }
