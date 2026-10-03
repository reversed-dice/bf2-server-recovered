// FUNCTION: BF2 0x428820
namespace dice { namespace hfe {

class HandleDropEvent {
public:
    unsigned int getType() const;
};

unsigned int HandleDropEvent::getType() const {
    return 0xd;
}

} }
// REVERSED_FUNCTION: dice_hfe_HandleDropEvent_getType_const (0x428820)