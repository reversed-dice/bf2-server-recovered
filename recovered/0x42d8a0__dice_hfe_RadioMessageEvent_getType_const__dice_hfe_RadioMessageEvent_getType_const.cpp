// FUNCTION: BF2 0x42d8a0
namespace dice {
namespace hfe {

class RadioMessageEvent {
public:
    unsigned int getType() const;
};

unsigned int RadioMessageEvent::getType() const {
    return 0x14;
}

} // namespace hfe
} // namespace dice
// REVERSED_FUNCTION: dice_hfe_RadioMessageEvent_getType_const::dice_hfe_RadioMessageEvent_getType_const (0x42d8a0)