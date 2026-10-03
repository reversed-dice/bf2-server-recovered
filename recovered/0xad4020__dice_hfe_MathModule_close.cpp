// FUNCTION: BF2 0xad4020
namespace dice { namespace hfe {

class GameLogic {
public:
    void init();
};

class ClientGameLogic : public GameLogic {
public:
    unsigned int init();
};

unsigned int ClientGameLogic::init() {
    GameLogic::init();
    return 1;
}

} }
// REVERSED_FUNCTION: dice_hfe_ClientGameLogic_init (0x470fc0)