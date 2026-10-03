// FUNCTION: BF2 0x473280
namespace dice { namespace hfe {

class GameLogic {
public:
    float getUAVReloadTime() const;
};

float GameLogic::getUAVReloadTime() const {
    // offset 0x450
    return *(float*)((unsigned long long)this + 0x450);  // MOVSS XMM0,DWORD PTR [RDI+0x450]
}

} } // namespace
// REVERSED_FUNCTION: dice_hfe_GameLogic_getUAVReloadTime_const (0x473280)