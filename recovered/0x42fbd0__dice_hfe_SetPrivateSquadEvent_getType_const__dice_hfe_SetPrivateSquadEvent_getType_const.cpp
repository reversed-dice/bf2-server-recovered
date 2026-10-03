// FUNCTION: BF2 0x42fbd0
namespace dice {
namespace hfe {

class SetPrivateSquadEvent {
public:
    unsigned int getType() const __attribute__((noinline));
};

unsigned int SetPrivateSquadEvent::getType() const {
    return 0x17;
}

} // namespace hfe
} // namespace dice
// REVERSED_FUNCTION: dice_hfe_SetPrivateSquadEvent_getType_const (0x42fbd0)