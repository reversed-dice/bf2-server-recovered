// FUNCTION: BF2 0x4d2760
#include <list>
namespace dice { namespace hfe {
struct Vec3 { float x, y, z; };
namespace world {

class IProjectileObject;
class IExplosionEffect { public: virtual ~IExplosionEffect(); };
class CExplosionEffectFlashBang : public IExplosionEffect {
public:
    CExplosionEffectFlashBang(const Vec3& pos, const IProjectileObject* proj);
    Vec3 m_pos;
};

class CPersistentExplosionEffectManager {
public:
    template <class T> IExplosionEffect* initExplosionEffect(const Vec3& pos, const IProjectileObject* proj);
    std::list<IExplosionEffect*> m_effects;
};

template <class T>
IExplosionEffect* CPersistentExplosionEffectManager::initExplosionEffect(const Vec3& pos, const IProjectileObject* proj)
{
    T* e = new T(pos, proj);
    m_effects.push_back(e);
    return e;
}

template IExplosionEffect* CPersistentExplosionEffectManager::initExplosionEffect<CExplosionEffectFlashBang>(const Vec3&, const IProjectileObject*);

} } }
