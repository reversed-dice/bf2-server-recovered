// FUNCTION: BF2 0x475820
namespace dice { namespace hfe {

class GameLogic {
public:
    void setAirMouseSensitivity(float sensitivity);
};

void GameLogic::setAirMouseSensitivity(float sensitivity)
{
    *reinterpret_cast<float*>(reinterpret_cast<char*>(this) + 0x424) = sensitivity;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_setAirMouseSensitivity_float (0x475820)