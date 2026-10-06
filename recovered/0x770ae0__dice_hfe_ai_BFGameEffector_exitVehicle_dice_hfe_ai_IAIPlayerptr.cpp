// FUNCTION: BF2 0x770ae0
namespace dice { namespace hfe {

class IGame {
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
    virtual void _m21();
    virtual void _m22();
    virtual void _m23();
    virtual void _m24();
    virtual void _m25();
    virtual void _m26();
    virtual void _m27();
    virtual void _m28();
    virtual void _m29();
    virtual void _m30();
    virtual void _m31();
    virtual void _m32();
    virtual void _m33();
    virtual void _m34();
    virtual void _m35();
    virtual void _m36();
    virtual void _m37();
    virtual void _m38();
    virtual void _m39();
    virtual void _m40();
    virtual void _m41();
    virtual bool exitVehicle(void* player, int a, int b); // slot 42 = 0x150
};

extern IGame* game;

namespace ai {

class IAIPlayer {
public:
    virtual void _m0();
    virtual void _m1();
    virtual void _m2();
    virtual void* getPlayer(); // slot 3 = 0x18
};

class BFGameEffector {
public:
    virtual void _m0();
    virtual void _m1();
    virtual void _m2();
    virtual bool exitVehicle(IAIPlayer* player); // slot 3 = 0x18
};

bool BFGameEffector::exitVehicle(IAIPlayer* player)
{
    return game->exitVehicle(player->getPlayer(), 1, 1);
}

} } }
// REVERSED_FUNCTION: dice_hfe_ai_BFGameEffector_exitVehicle_dice_hfe_ai_IAIPlayerptr (0x770ae0)
