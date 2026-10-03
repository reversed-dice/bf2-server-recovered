// FUNCTION: BF2 0x426ba0
namespace dice { namespace hfe {

class GrapplingHookContainerCreateEvent {
public:
    unsigned int getType() const;
};

unsigned int GrapplingHookContainerCreateEvent::getType() const {
    return 0x3c;
}

} }
// REVERSED_FUNCTION: dice_hfe_GrapplingHookContainerCreateEvent_getType_const (0x426ba0)