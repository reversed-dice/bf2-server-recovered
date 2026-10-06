// FUNCTION: BF2 0x7998d0
namespace dice { namespace hfe {

namespace world {

class IPlayer {
public:
    virtual void _m0();
    virtual void _m1();
    virtual void _m2();
    virtual void _m3();
    virtual void _m4();
    virtual void _m5();
    virtual void _m6();
    virtual void _m7();
    virtual void _m8();
    virtual void _m9();
    virtual void _m10();
    virtual void _m11();
    virtual void _m12();
    virtual void _m13();
    virtual void _m14();
    virtual void _m15();
    virtual void _m16();
    virtual void _m17();
    virtual void _m18();
    virtual void _m19();
    virtual void _m20();
    virtual int getId(); // slot 21 = 0xa8
};

class PlayerManager {
public:
    virtual void _m0();
    virtual void _m1();
    virtual void _m2();
    virtual void _m3();
    virtual void _m4();
    virtual void _m5();
    virtual void _m6();
    virtual IPlayer* getLocalPlayer(); // slot 7 = 0x38
};

extern PlayerManager* playerManager;

}

namespace ai {

class AIPlayerFactory {
public:
    int getLocalPlayerId();
};

int AIPlayerFactory::getLocalPlayerId()
{
    world::IPlayer* p = world::playerManager->getLocalPlayer();
    if (p) {
        return p->getId();
    }
    return -1;
}

} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIPlayerFactory_getLocalPlayerId (0x7998d0)
