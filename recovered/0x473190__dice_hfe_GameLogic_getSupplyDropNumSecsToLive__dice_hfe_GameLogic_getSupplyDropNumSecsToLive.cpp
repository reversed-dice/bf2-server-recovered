// FUNCTION: BF2 0x473190
namespace dice { namespace hfe {

class GameLogic {
public:
    float getSupplyDropNumSecsToLive() const;
};

float GameLogic::getSupplyDropNumSecsToLive() const {
    return *reinterpret_cast<const float*>(reinterpret_cast<const char*>(this) + 0x3A8);
}

} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_getSupplyDropNumSecsToLive (0x473190)