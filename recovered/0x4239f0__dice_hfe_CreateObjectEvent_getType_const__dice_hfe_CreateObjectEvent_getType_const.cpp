// FUNCTION: BF2 0x4239f0
namespace dice {
namespace hfe {

class CreateObjectEvent {
public:
    unsigned int getType() const;
};

unsigned int CreateObjectEvent::getType() const {
    return 6;
}

} // namespace hfe
} // namespace dice
// REVERSED_FUNCTION: dice_hfe_CreateObjectEvent_getType_const::dice_hfe_CreateObjectEvent_getType_const (0x4239f0)