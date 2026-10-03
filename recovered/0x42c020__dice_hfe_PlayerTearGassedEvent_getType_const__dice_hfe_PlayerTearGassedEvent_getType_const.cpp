// FUNCTION: BF2 0x42c020
namespace dice {
namespace hfe {

class PlayerTearGassedEvent {
public:
    unsigned int getType() const;
};

unsigned int PlayerTearGassedEvent::getType() const {
    return 0x41;
}

} // namespace hfe
} // namespace dice
// REVERSED_FUNCTION: dice_hfe_PlayerTearGassedEvent_getType_const::dice_hfe_PlayerTearGassedEvent_getType_const (0x42c020)