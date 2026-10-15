// FUNCTION: BF2 0x61a4a0
namespace dice { namespace hfe {

class Mat4 { public: float m[16]; };
class GameEvent { public: virtual ~GameEvent(); };

namespace world {
class GenericProjectile;
class IObject;
}

class StickyProjectileEvent : public GameEvent {
public:
    StickyProjectileEvent(world::GenericProjectile* p, world::IObject* o, Mat4 const& m);
    char _pad[0x50];
};

namespace world {

class WeakRef {
public:
    unsigned char _pad[0x8];
    IObject* m_object;
};

struct StickyCollisionComp {
    unsigned char _pad0[0x18];
    GenericProjectile* m_18;
    unsigned char _pad1[0x40 - 0x20];
    WeakRef* m_40;
    unsigned char m_48;
    unsigned char _pad2[0x4c - 0x49];
    Mat4 m_4c;

    void updateComponent(float deltaTime, unsigned int updatePass);
};

} } }

namespace dice { namespace hfe {

extern "C" void* dice_hfe_gameLogic;
extern "C" void* dice_hfe_game;

class IGame {
public:
    virtual void g0();
    virtual void g1();
    virtual void g2();
    virtual void g3();
    virtual void g4();
    virtual void g5();
    virtual void g6();
    virtual void g7();
    virtual void g8();
    virtual void g9();
    virtual void g10();
    virtual void g11();
    virtual void g12();
    virtual void g13();
    virtual void g14();
    virtual void g15();
    virtual void g16();
    virtual void g17();
    virtual void g18();
    virtual void g19();
    virtual void g20();
    virtual void g21();
    virtual void g22();
    virtual void g23();
    virtual void g24();
    virtual void g25();
    virtual void g26();
    virtual void g27();
    virtual void g28();
    virtual void g29();
    virtual void g30();
    virtual void g31();
    virtual void g32();
    virtual void addEvent(GameEvent* e);   // 0x108
};

void world::StickyCollisionComp::updateComponent(float, unsigned int)
{
    if (m_48 == 0)
        return;
    if (((bool (*)(void*))(*(void***)dice_hfe_gameLogic)[0x278 / 8])(dice_hfe_gameLogic) == 0
        && ((bool (*)(void*))(*(void***)m_18)[0x508 / 8])(m_18) == 0)
        return;
    if (((bool (*)(void*))(*(void***)m_18)[0x88 / 8])(m_18) != 0)
        return;
    m_48 = 0;
    world::IObject* obj = 0;
    if (m_40 != 0) {
        obj = m_40->m_object;
        if (obj != 0) {
            ((void (*)(void*, void*, void*))(*(void***)this)[0xc8 / 8])(this, obj, &m_4c);
            goto post;
        }
    }
    ((void (*)(void*, void*))(*(void***)this)[0xd0 / 8])(this, &m_4c);
post:
    if (((bool (*)(void*))(*(void***)m_18)[0x508 / 8])(m_18) != 0)
        return;
    ((IGame*)dice_hfe_game)->addEvent(new StickyProjectileEvent(m_18, obj, m_4c));
}

} }
