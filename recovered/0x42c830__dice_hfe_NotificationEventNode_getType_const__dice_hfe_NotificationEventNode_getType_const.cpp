// FUNCTION: BF2 0x42c830
namespace dice {
namespace hfe {

class NotificationEventNode {
public:
    unsigned int getType() const;
};

unsigned int NotificationEventNode::getType() const {
    return 0xffffffff;
}

} // namespace hfe
} // namespace dice
// REVERSED_FUNCTION: dice_hfe_NotificationEventNode_getType_const::dice_hfe_NotificationEventNode_getType_const (0x42c830)