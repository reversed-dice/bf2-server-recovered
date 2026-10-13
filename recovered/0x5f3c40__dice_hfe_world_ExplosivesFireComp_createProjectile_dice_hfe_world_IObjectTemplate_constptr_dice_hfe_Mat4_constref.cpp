// FUNCTION: BF2 0x5f3c40
#include <set>

namespace dice { namespace hfe { namespace world {

class IObjectTemplate;
class Mat4;
class IObject;

extern int IID_IProjectileObject;

class FireComp {
public:
    bool ignoreNetworkedProjectileOnClient(IObjectTemplate const* tmpl);
    IObject* createProjectile(IObjectTemplate const* tmpl, Mat4 const& mat);
};

class ExplosivesFireComp : public FireComp {
public:
    char pad_0[0x178];
    std::set<IObject*> m_projectiles;
    IObject* createProjectile(IObjectTemplate const* tmpl, Mat4 const& mat);
};

IObject* ExplosivesFireComp::createProjectile(IObjectTemplate const* tmpl, Mat4 const& mat)
{
    IObject* result = 0;

    if (!ignoreNetworkedProjectileOnClient(tmpl))
        result = FireComp::createProjectile(tmpl, mat);

    if (result != 0) {
        IObject* projectile = (IObject*) ((void* (*)(void*, int)) (*(void***) result)[3]) (
            result, IID_IProjectileObject);

        if (projectile == 0 || !((bool (*)(void*)) (*(void***) projectile)[68]) (projectile)) {
            std::pair<std::set<IObject*>::iterator, bool> inserted = m_projectiles.insert(result);
        }
    }

    return result;
}

} } }
