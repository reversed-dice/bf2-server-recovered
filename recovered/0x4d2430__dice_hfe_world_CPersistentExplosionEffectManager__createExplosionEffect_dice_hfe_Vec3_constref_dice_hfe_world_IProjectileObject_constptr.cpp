// FUNCTION: BF2 0x4d2430
namespace dice { namespace hfe {
class Vec3;
namespace world {

class IExplosionEffect;
class IProjectileObject {
public:
    virtual ~IProjectileObject() {}
    virtual void _pad01() {}
    virtual void _pad02() {}
    virtual void _pad03() {}
    virtual void _pad04() {}
    virtual void _pad05() {}
    virtual void _pad06() {}
    virtual void _pad07() {}
    virtual void _pad08() {}
    virtual void _pad09() {}
    virtual void _pad10() {}
    virtual void _pad11() {}
    virtual void _pad12() {}
    virtual void _pad13() {}
    virtual void _pad14() {}
    virtual void _pad15() {}
    virtual void _pad16() {}
    virtual void _pad17() {}
    virtual void _pad18() {}
    virtual void _pad19() {}
    virtual void _pad20() {}
    virtual void _pad21() {}
    virtual void _pad22() {}
    virtual void _pad23() {}
    virtual void _pad24() {}
    virtual void _pad25() {}
    virtual void _pad26() {}
    virtual void _pad27() {}
    virtual void _pad28() {}
    virtual void _pad29() {}
    virtual void _pad30() {}
    virtual void _pad31() {}
    virtual void _pad32() {}
    virtual void _pad33() {}
    virtual void _pad34() {}
    virtual void _pad35() {}
    virtual void _pad36() {}
    virtual void _pad37() {}
    virtual void _pad38() {}
    virtual void _pad39() {}
    virtual void _pad40() {}
    virtual void _pad41() {}
    virtual void _pad42() {}
    virtual void _pad43() {}
    virtual unsigned int getProjectileType() const = 0;
};
class CExplosionEffectMolotovCocktail;
class CExplosionEffectTearGas;
class CExplosionEffectFlashBang;

class CPersistentExplosionEffectManager {
public:
    IExplosionEffect* createExplosionEffect(Vec3 const& pos, IProjectileObject const* proj);
private:
    template<typename T>
    IExplosionEffect* initExplosionEffect(Vec3 const& pos, IProjectileObject const* proj);
};

IExplosionEffect*
CPersistentExplosionEffectManager::createExplosionEffect(
    Vec3 const& pos,
    IProjectileObject const* proj)
{
    unsigned int type = proj->getProjectileType();
    if (type == 2) {
        return initExplosionEffect<CExplosionEffectMolotovCocktail>(pos, proj);
    } else if (type == 3) {
        return initExplosionEffect<CExplosionEffectTearGas>(pos, proj);
    } else if (__builtin_expect(--type == 0, 0)) {
        return initExplosionEffect<CExplosionEffectFlashBang>(pos, proj);
    }
    return 0;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_CPersistentExplosionEffectManager::createExplosionEffect_dice_hfe_Vec3_constref_dice_hfe_world_IProjectileObject_constptr (0x4d2430)