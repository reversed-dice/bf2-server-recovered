// FUNCTION: BF2 0x42c840
namespace dice {
namespace hfe {

class PostRemoteEvent {
public:
    unsigned int getType() const;
};

unsigned int PostRemoteEvent::getType() const {
    return 0xb;
}

} // namespace hfe
} // namespace dice
// REVERSED_FUNCTION: dice_hfe_PostRemoteEvent_getType_const::dice_hfe_PostRemoteEvent_getType_const (0x42c840)