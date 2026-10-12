// FUNCTION: BF2 0x4c9f70

namespace dice { namespace hfe {

namespace world {

extern unsigned int const IID_IPlayerControlObject;
extern unsigned int const IID_IPlayerControlObjectTemplate;

class IPlayerControlObjectTemplate {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8)
#undef V
    virtual int getType();
};

class IObject {
public:
    virtual void _v0();
    virtual void _v1();
    virtual void _v2();
    virtual void* queryInterface(unsigned int iid);
    char pad[0x20];
    void* m_template;
};

class IPlayer {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8) V(9) V(10)
    V(11) V(12) V(13) V(14) V(15) V(16) V(17)
#undef V
    virtual IObject* getVehicle();
#define V(n) virtual void _v##n();
    V(19) V(20) V(21) V(22) V(23) V(24) V(25) V(26) V(27) V(28)
    V(29) V(30) V(31) V(32) V(33) V(34) V(35) V(36) V(37) V(38)
    V(39) V(40) V(41) V(42) V(43) V(44) V(45) V(46) V(47) V(48)
    V(49) V(50) V(51) V(52) V(53) V(54) V(55) V(56) V(57)
#undef V
    virtual int getTeam();
};

}

class CombatArea {
public:
    bool checkIfActiveToPlayer(world::IPlayer* player);

    char pad[0x14];
    int m_vehicleType;
    char pad2[0x8];
    int m_team;
};

bool CombatArea::checkIfActiveToPlayer(world::IPlayer* player)
{
    if (!player)
        return false;
    world::IObject* vehicle = player->getVehicle();
    if (!vehicle)
        return false;
    if (!vehicle->queryInterface(world::IID_IPlayerControlObject))
        return false;
    int team = player->getTeam();
    vehicle = player->getVehicle();
    world::IObject* tmplObj = static_cast<world::IObject*>(vehicle->m_template);
    world::IPlayerControlObjectTemplate* tmpl = static_cast<world::IPlayerControlObjectTemplate*>(tmplObj->queryInterface(world::IID_IPlayerControlObjectTemplate));
    int type = 0;
    if (tmpl) {
        type = tmpl->getType();
    }
    if (team != 0) {
        if (m_team != 0 && team != m_team)
            return false;
    }
    if (m_vehicleType == 4 || m_vehicleType == type)
        return true;
    if (m_vehicleType == 5) {
        unsigned int diff = type - 2;
        if (diff < 2)
            return true;
    }
    return false;
}

} }
