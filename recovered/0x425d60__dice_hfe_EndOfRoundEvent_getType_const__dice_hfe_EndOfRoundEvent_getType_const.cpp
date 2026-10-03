// FUNCTION: BF2 0x425d60
namespace dice {
namespace hfe {

class EndOfRoundEvent {
public:
    unsigned int getType() const;
};

unsigned int EndOfRoundEvent::getType() const {
    return 0x30;
}

} // namespace hfe
} // namespace dice
// REVERSED_FUNCTION: dice_hfe_EndOfRoundEvent_getType_const::dice_hfe_EndOfRoundEvent_getType_const (0x425d60)