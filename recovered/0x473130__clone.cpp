// FUNCTION: BF2 0x473130
namespace dice { namespace hfe {

class GameLogic {
public:
    float getSupplyDropHeight() const;
};

float GameLogic::getSupplyDropHeight() const {
    return *reinterpret_cast<const float*>(reinterpret_cast<const char*>(this) + 0x458);
}

} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_getSupplyDropHeight (0x473150)