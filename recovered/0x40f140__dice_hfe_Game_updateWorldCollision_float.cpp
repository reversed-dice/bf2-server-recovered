// FUNCTION: BF2 0x40f140
namespace dice { namespace hfe {

#define PADV(n) virtual void _v##n();
class IPhysics {
public:
    PADV(0) PADV(1) PADV(2) PADV(3) PADV(4) PADV(5) PADV(6) PADV(7)
    virtual void updateCollision(int mode, float dt);
    virtual void beginCollision();
};
class IWorld {
public:
    PADV(0) PADV(1) PADV(2) PADV(3) PADV(4) PADV(5) PADV(6) PADV(7) PADV(8) PADV(9)
    PADV(10) PADV(11) PADV(12) PADV(13) PADV(14) PADV(15) PADV(16) PADV(17) PADV(18) PADV(19)
    PADV(20) PADV(21) PADV(22) PADV(23) PADV(24) PADV(25) PADV(26) PADV(27) PADV(28) PADV(29)
    PADV(30) PADV(31) PADV(32) PADV(33) PADV(34) PADV(35) PADV(36) PADV(37) PADV(38) PADV(39)
    PADV(40)
    virtual void updateCollision();
};
#undef PADV

extern IWorld* g_world;
extern IPhysics* g_physics;

class Game {
public:
    virtual void _v00(); virtual void _v08(); virtual void _v10(); virtual void _v18();
    virtual void _v20(); virtual void _v28(); virtual void _v30(); virtual void _v38();
    virtual void _v40(); virtual void _v48(); virtual void _v50();
    virtual void preCollision();
    void updateWorldCollision(float dt);
};

void Game::updateWorldCollision(float dt)
{
    preCollision();
    g_world->updateCollision();
    g_physics->beginCollision();
    g_physics->updateCollision(0, dt);
}

} }
