// FUNCTION: BF2 0x42c800
namespace dice { namespace hfe {
class EventNode {
public:
    ~EventNode();
};
EventNode::~EventNode() {
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb2d8f0);
    operator delete(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_EventNode_dtor_EventNode (0x42c800)