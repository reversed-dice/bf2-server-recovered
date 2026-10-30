// FUNCTION: BF2 0x5f3d20
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
#include <list>
#include <set>

namespace dice { namespace hfe {

template <class T> struct WeakPtrHandle {
    void release() { if (--refs == 0) delete this; }
    int refs;
    T* obj;
};

template <class T> class WeakPtr {
public:
    WeakPtr() : m_h(0) {}
    WeakPtr(const WeakPtr& o) : m_h(o.m_h) { if (m_h) ++m_h->refs; }
    WeakPtr& operator=(const WeakPtr& o)
    {
        if (o.m_h)
            ++o.m_h->refs;
        if (m_h)
            m_h->release();
        m_h = o.m_h;
        return *this;
    }
    ~WeakPtr() { if (m_h) m_h->release(); }
    T* get() const { return m_h ? m_h->obj : 0; }
    WeakPtrHandle<T>* m_h;
};

namespace world {

class IPlayer;
class IObject;

typedef WeakPtr<IPlayer> WP;

class IPlayer {
public:
    virtual void addRef();                                       // +0x0
    virtual void getRef();                                       // +0x8
    virtual void release();                                      // +0x10
    virtual void queryInterface(unsigned int) const;             // +0x18
    virtual void getClassID() const;                             // +0x20
    virtual ~IPlayer();                                          // +0x28
    virtual WP getWeakPtr() const;                               // +0x38
};

class IObject {
public:
    virtual void addRef();                                       // +0x0
    virtual void getRef();                                       // +0x8
    virtual void release();                                      // +0x10
    virtual void* queryInterface(unsigned int) const;            // +0x18
};

class IProjectileObject {
public:
    virtual void addRef();                                       // +0x0
    virtual void getRef();                                       // +0x8
    virtual void release();                                      // +0x10
    virtual void queryInterface(unsigned int) const;             // +0x18
    virtual ~IProjectileObject();                                // +0x20
    virtual void detonate(bool);                                 // +0x30
    virtual void resetProjectile(bool);                          // +0x38
    virtual void activate();                                     // +0x40
    virtual void initOnLaunch();                                 // +0x48
    virtual void postInit();                                     // +0x50
    virtual void getIsActive() const;                            // +0x58
    virtual void setLauncherWeapon(IObject*);                    // +0x60
    virtual void getLauncherWeapon() const;                      // +0x68
    virtual void useProjectileCamera();                          // +0x70
    virtual void isInProjectileCamera();                         // +0x78
    virtual void disableProjectileCamera();                      // +0x80
    virtual void isCreatedByLocalPlayer() const;                 // +0x88
    virtual void setLauncherVehicle(IObject*);                   // +0x90
    virtual void getLauncherVehicle() const;                     // +0x98
    virtual void setPlayer(IPlayer*);                            // +0xa0
    virtual IPlayer* getPlayer() const;                          // +0xa8
    virtual void setAssistPlayers(std::list<WP>);                // +0xb0
    virtual void getAssistPlayers();                             // +0xb8
    virtual void setTeam(int);                                   // +0xc0
    virtual void getTeam();                                      // +0xc8
};

class GenericFireArm {
public:
    IPlayer* getPlayerByForce() const;
};

extern int IID_IProjectileObject;

class ExplosivesFireComp {
public:
    char pad0[0x18];
    GenericFireArm* m_arm;
    char pad1[0x68];
    unsigned char m_88;
    char pad2[0xef];
    std::set<IObject*> m_projectiles;
    void pickup();
};

typedef void (*FnSetTeam)(void*, int);

void ExplosivesFireComp::pickup()
{
    IPlayer* player = m_arm->getPlayerByForce();

    m_88 = 0;

    std::set<IObject*>::iterator it = m_projectiles.begin();
    while (it != m_projectiles.end()) {
        IObject* obj = *it;
        IProjectileObject* proj = 0;
        if (obj != 0)
            proj = (IProjectileObject*) obj->queryInterface(IID_IProjectileObject);
        if (proj != 0) {
            std::list<WP> players;
            WP h;
            IPlayer* p = proj->getPlayer();
            if (p != 0)
                h = p->getWeakPtr();
            players.push_back(h);

            proj->setAssistPlayers(players);
            proj->setPlayer(player);

            FnSetTeam setTeam = (FnSetTeam) (*(void***) proj)[0xc0 / 8];
            int team = 0;
            if (player != 0)
                team = ((int (*)(void*)) (*(void***) player)[58]) (player);
            setTeam(proj, team);
        }
        ++it;
    }
}

} }
}
