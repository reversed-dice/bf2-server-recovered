// FUNCTION: BF2 0x424ef0
namespace dice {
namespace hfe {

class DataBlockEvent {
public:
    unsigned int getType() const;
};

unsigned int DataBlockEvent::getType() const {
    return 4;
}

} // namespace hfe
} // namespace dice
// REVERSED_FUNCTION: dice_hfe_DataBlockEvent_getType_const::dice_hfe_DataBlockEvent_getType_const (0x424ef0)