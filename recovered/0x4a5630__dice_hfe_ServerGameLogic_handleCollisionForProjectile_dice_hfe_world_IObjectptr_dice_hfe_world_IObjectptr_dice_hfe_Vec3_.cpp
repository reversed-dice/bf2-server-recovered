// FUNCTION: BF2 0x4a5630
namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
};

namespace world {

class IObject;
class CollisionFaceInfo;

class ISoldierInfo {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8) V(9) V(10)
    V(11) V(12) V(13) V(14) V(15) V(16)
#undef V
    virtual unsigned int getId();
};

class PlayerScoreData {
public:
    void addBulletsGivingDamage(unsigned int id, int n, IObject* obj);
};

class IPlayer {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8) V(9) V(10)
    V(11) V(12) V(13) V(14) V(15) V(16) V(17) V(18) V(19) V(20)
    V(21) V(22) V(23) V(24) V(25) V(26) V(27) V(28) V(29) V(30)
    V(31) V(32) V(33) V(34) V(35) V(36) V(37) V(38) V(39) V(40)
    V(41) V(42) V(43) V(44) V(45) V(46) V(47) V(48) V(49) V(50)
    V(51) V(52) V(53) V(54) V(55) V(56) V(57) V(58) V(59) V(60)
    V(61) V(62) V(63) V(64) V(65) V(66) V(67) V(68) V(69) V(70)
    V(71) V(72) V(73) V(74) V(75) V(76) V(77) V(78) V(79) V(80)
    V(81) V(82) V(83) V(84) V(85) V(86) V(87) V(88) V(89) V(90)
    V(91) V(92)
#undef V
    virtual PlayerScoreData* getScoreData();
};

class WeaponObject {
public:
    char _pad[0x28];
    ISoldierInfo* m_template;
};

extern unsigned int const IID_IProjectileObject;

class IProjectileObject {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8) V(9) V(10)
    V(11) V(12)
#undef V
    virtual WeaponObject* getWeapon();
#define V(n) virtual void _v##n();
    V(14) V(15) V(16) V(17) V(18) V(19) V(20)
#undef V
    virtual IPlayer* getPlayer();
};

class IObject {
public:
    virtual void _v0();
    virtual void _v1();
    virtual void _v2();
    virtual void* queryInterface(unsigned int iid);
};

IObject* getRootParent(IObject const*);

struct GameLogicCollision {
    static bool serverHandleCollisionForProjectile(IObject* obj1, IObject* obj2,
                                                   Vec3 const& v1, Vec3 const& v2, Vec3 const& v3,
                                                   int i1, int i2,
                                                   CollisionFaceInfo* face1, CollisionFaceInfo* face2);
};

} // namespace world

class ServerGameLogic {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8) V(9) V(10)
    V(11) V(12) V(13) V(14) V(15) V(16) V(17) V(18) V(19) V(20)
    V(21) V(22) V(23) V(24) V(25) V(26) V(27) V(28) V(29) V(30)
    V(31) V(32) V(33) V(34) V(35) V(36) V(37) V(38) V(39) V(40)
    V(41) V(42) V(43) V(44) V(45) V(46) V(47) V(48) V(49) V(50)
    V(51) V(52) V(53) V(54) V(55) V(56) V(57) V(58) V(59) V(60)
    V(61) V(62) V(63) V(64) V(65) V(66) V(67) V(68) V(69) V(70)
    V(71)
#undef V
    virtual void v72(int n, world::IPlayer* player);

    bool handleCollisionForProjectile(world::IObject* obj1, world::IObject* obj2,
                                      Vec3 const& v1, Vec3 const& v2, Vec3 const& v3,
                                      int i1, int i2,
                                      world::CollisionFaceInfo* face1, world::CollisionFaceInfo* face2);
};

bool ServerGameLogic::handleCollisionForProjectile(world::IObject* obj1, world::IObject* obj2,
                                                  Vec3 const& v1, Vec3 const& v2, Vec3 const& v3,
                                                  int i1, int i2,
                                                  world::CollisionFaceInfo* face1, world::CollisionFaceInfo* face2)
{
    if (world::GameLogicCollision::serverHandleCollisionForProjectile(obj1, obj2, v1, v2, v3, i1, i2, face1, face2)) {
        world::IObject* root = world::getRootParent(obj1);
        if (root) {
            world::IProjectileObject* proj = static_cast<world::IProjectileObject*>(root->queryInterface(world::IID_IProjectileObject));
            if (proj) {
                v72(1, proj->getPlayer());
                world::WeaponObject* weapon = proj->getWeapon();
                if (proj->getPlayer() && weapon) {
                    world::PlayerScoreData* data = proj->getPlayer()->getScoreData();
                    if (data) {
                        data->addBulletsGivingDamage(weapon->m_template->getId(), 1, obj1);
                    }
                }
            }
        }
    }
    return true;
}

} }
