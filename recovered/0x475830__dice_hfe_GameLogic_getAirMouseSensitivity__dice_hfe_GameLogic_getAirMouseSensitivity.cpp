// FUNCTION: BF2 0x475830
namespace dice { namespace hfe {

class GameLogic {
public:
    float getAirMouseSensitivity();
};

float GameLogic::getAirMouseSensitivity() {
    return *(float*)((char*)this + 0x424);
}

} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_getAirMouseSensitivity (0x475830)