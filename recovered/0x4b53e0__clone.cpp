// FUNCTION: BF2 0x4b53e0
namespace dice { namespace hfe {
class EventNode {
public:
    virtual ~EventNode() {}
    unsigned int getType() const;
    void release();
};
void EventNode::release() {
    delete this;
}
} }
// REVERSED_FUNCTION: dice_hfe_EventNode_release (0x42c810)