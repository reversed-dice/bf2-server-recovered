// FUNCTION: BF2 0x60fe10
namespace dice { namespace hfe { namespace world {

extern unsigned int IID_IProjectileCollisionComp;
extern unsigned int IID_IProjectileDetonationComp;
extern unsigned int IID_IProjectileSeekComp;
extern unsigned int IID_IProjectileFollowComp;
extern unsigned int IID_IProjectileRicochetComp;
extern unsigned int IID_IProjectilePenetrateComp;
extern unsigned int IID_IProjectileSoundComp;

class GenericProjectile {
public:
    char pad[0x258];
    void* m_258;      // +0x258
    void* m_260;      // +0x260
    void* m_268;
    void* m_270;
    void* m_278;
    void* m_280;
    void* m_288;
    void* m_290;
    void initComponents();
};

typedef void* (*Fnv23)(void*, unsigned int, unsigned int);
typedef void (*Fnv9)(void*, void*);

void GenericProjectile::initComponents() {
    m_260 = ((Fnv23)(*(void***)this)[23])(this, IID_IProjectileCollisionComp, IID_IProjectileCollisionComp);
    m_268 = ((Fnv23)(*(void***)this)[23])(this, IID_IProjectileDetonationComp, IID_IProjectileDetonationComp);
    m_270 = ((Fnv23)(*(void***)this)[23])(this, IID_IProjectileSeekComp, IID_IProjectileSeekComp);
    m_278 = ((Fnv23)(*(void***)this)[23])(this, IID_IProjectileFollowComp, IID_IProjectileFollowComp);
    m_280 = ((Fnv23)(*(void***)this)[23])(this, IID_IProjectileRicochetComp, IID_IProjectileRicochetComp);
    m_288 = ((Fnv23)(*(void***)this)[23])(this, IID_IProjectilePenetrateComp, IID_IProjectilePenetrateComp);
    m_290 = ((Fnv23)(*(void***)this)[23])(this, IID_IProjectileSoundComp, IID_IProjectileSoundComp);
    if (m_290 != 0) {
        ((Fnv9)(*(void***)m_290)[9])(m_290, m_258);
    }
}

} } }
