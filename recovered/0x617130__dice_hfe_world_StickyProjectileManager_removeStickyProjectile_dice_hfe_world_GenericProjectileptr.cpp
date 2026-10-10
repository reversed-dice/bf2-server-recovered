// FUNCTION: BF2 0x617130
// Target: 0x617130
#include <set>

namespace dice { namespace hfe { namespace world {

class GenericProjectile {};

class StickyProjectileManager {
public:
    std::set<GenericProjectile*> m_projectiles; // at 0x0!

    void removeStickyProjectile(GenericProjectile* p);
};

void StickyProjectileManager::removeStickyProjectile(GenericProjectile* p) {
    std::set<GenericProjectile*>::iterator it = m_projectiles.find(p);
    if (it != m_projectiles.end()) {
        m_projectiles.erase(it);
    }
}

} } }
