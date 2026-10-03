// FUNCTION: BF2 0x473180
namespace dice { namespace hfe {

class GameLogic {
public:
    void setSupplyDropNumSecsToLive(float value);
    // member at offset 0x3a8
};

void GameLogic::setSupplyDropNumSecsToLive(float value) {
    *reinterpret_cast<float*>(reinterpret_cast<char*>(this) + 0x3a8) = value;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_setSupplyDropNumSecsToLive_float (0x473180)