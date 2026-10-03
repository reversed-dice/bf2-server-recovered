// FUNCTION: BF2 0x486cd0
namespace dice { namespace hfe { namespace world {

class IObject {
public:
    void* _vtbl;
    unsigned int m_flags;
};
IObject* getRootParent(const IObject* o);

class ProjectileVsTargetPredicator {
public:
    bool predicate(IObject* o);
    void* _vtbl;
    unsigned int m_includeMask;
    unsigned int m_excludeMask;
    IObject* m_projectile;
    IObject* m_owner;
};

bool ProjectileVsTargetPredicator::predicate(IObject* o)
{
    if (getRootParent(o) == m_projectile)
        return false;
    if (getRootParent(o) == m_owner)
        return false;
    if (!(o->m_flags & m_includeMask))
        return false;
    IObject* root = getRootParent(o);
    if (root && (root->m_flags & m_excludeMask))
        return false;
    return true;
}

} } }
