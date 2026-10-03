// FUNCTION: BF2 0x42e0c0
namespace dice {
namespace hfe {

class RankEvent {
public:
    unsigned int getType() const;
};

unsigned int RankEvent::getType() const {
    return 0x1a;
}

} // namespace hfe
} // namespace dice
// REVERSED_FUNCTION: dice_hfe_RankEvent_getType_const::dice_hfe_RankEvent_getType_const (0x42e0c0)