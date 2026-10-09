// FUNCTION: BF2 0x61a2b0
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe { namespace world {

class GenericProjectile;

class StickyProjectileManager {
public:
    static StickyProjectileManager* m_instance;
    void removeStickyProjectile(GenericProjectile* projectile);
};

class StickyCollisionComp {
public:
    void restoreProjectileState(bool state);
    void resetProjectile(bool state);
private:
    unsigned char _pad0[0x18];
    GenericProjectile* m_projectile;   // +0x18
    unsigned char _pad1[0x8c - 0x20];
    bool m_stuck;                      // +0x8c
};

void StickyCollisionComp::resetProjectile(bool state) {
    if (m_projectile != 0) {
        if (StickyProjectileManager::m_instance != 0) {
            StickyProjectileManager::m_instance->removeStickyProjectile(m_projectile);
        }
    }
    restoreProjectileState(state);
    GenericProjectile* q = m_projectile;
    void* r = *(void**)((char*)q + 0x88);
    if (!m_stuck)
        return;
    ((void (*)(void*, int, int))(*(void***)q)[0xc0 / 8])(q, 0x100, 0);
    m_stuck = false;
    ((void (*)(void*, int))(*(void***)r)[0x200 / 8])(r, 0);
    ((void (*)(void*, int))(*(void***)r)[0x30 / 8])(r, 1);
}

} } }
