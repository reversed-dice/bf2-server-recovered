// FUNCTION: BF2 0x470e40
namespace dice { namespace hfe {

namespace world {
class IPlayer;
}

class GameLogic {
public:
    unsigned char killPlayer(world::IPlayer*, unsigned char, unsigned char);
};

class ClientGameLogic : public GameLogic {
public:
    unsigned char killPlayer(world::IPlayer* player, unsigned char param3, unsigned char param4);
};

unsigned char ClientGameLogic::killPlayer(world::IPlayer* player, unsigned char param3, unsigned char param4) {
    if (player) {
        typedef void (*VFunc)(world::IPlayer*, int);
        VFunc f = reinterpret_cast<VFunc>(
            reinterpret_cast<unsigned long long*>(
                *reinterpret_cast<unsigned long long*>(player)
            )[0x3c]
        );
        f(player, 0);
    }
    return GameLogic::killPlayer(player, param3, param4);
}

} }
// REVERSED_FUNCTION: dice_hfe_ClientGameLogic_killPlayer_dice_hfe_world_IPlayerptr_bool_bool (0x470e40)