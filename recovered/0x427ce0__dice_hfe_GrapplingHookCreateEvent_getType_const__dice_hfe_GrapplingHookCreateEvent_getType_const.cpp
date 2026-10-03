// FUNCTION: BF2 0x427ce0
namespace dice { namespace hfe {

class GrapplingHookCreateEvent {
public:
    unsigned int getType() const;
};

unsigned int GrapplingHookCreateEvent::getType() const {
    return 0x3f;
}

} }
// REVERSED_FUNCTION: dice_hfe_GrapplingHookCreateEvent_getType_const (0x427ce0)