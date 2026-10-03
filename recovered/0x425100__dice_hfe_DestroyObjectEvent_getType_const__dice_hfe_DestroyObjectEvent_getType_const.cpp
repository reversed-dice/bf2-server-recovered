// FUNCTION: BF2 0x425100
namespace dice {
namespace hfe {

class DestroyObjectEvent {
public:
    unsigned int getType() const;
};

unsigned int DestroyObjectEvent::getType() const {
    return 7;
}

} // namespace hfe
} // namespace dice
// REVERSED_FUNCTION: dice_hfe_DestroyObjectEvent_getType_const::dice_hfe_DestroyObjectEvent_getType_const (0x425100)