// FUNCTION: BF2 0x770e90
#include <string>
#include <utility>

namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    void set(float ax, float ay, float az) { x = ax; y = ay; z = az; }
    Vec3() {}
    Vec3(float x_, float y_, float z_) : x(x_), y(y_), z(z_) {}
    Vec3(const Vec3& o) { set(o.x, o.y, o.z); }
};

struct Settings {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();
    virtual void slot10();
    virtual void slot11();
    virtual void slot12();
    virtual void slot13();
    virtual void slot14();
    virtual void slot15();
    virtual void slot16();
    virtual void slot17();
    virtual void slot18();
    virtual void slot19();
    virtual const char* getFlag(const std::string& name, const char& def) const;
};

extern Settings* settings;

namespace world {
class IPlayer;
}

class ServerGameLogic {
public:
    void spawnPlayer(world::IPlayer* player, std::pair<Vec3, Vec3>* pos);
};

extern ServerGameLogic* gameLogic;

namespace ai {

class IAIPlayer {
public:
    virtual void _v0();
    virtual void _v1();
    virtual void _v2();
    virtual world::IPlayer* getPlayer();
};

class BFGameEffector {
public:
    virtual ~BFGameEffector();
    virtual void _v1();
    virtual bool forceSpawnBot(IAIPlayer* player, Vec3 const& a, Vec3 const& b);
};

bool BFGameEffector::forceSpawnBot(IAIPlayer* player, Vec3 const& a, Vec3 const& b)
{
    char flag = *dice::hfe::settings->getFlag(std::string("GSIsServer"), (char)0);
    if (flag) {
        std::pair<Vec3, Vec3> pos(a, b);
        gameLogic->spawnPlayer(player->getPlayer(), &pos);
    }
}

} } }
