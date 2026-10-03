// FUNCTION: BF2 0x425ff0
namespace dice { namespace hfe {
class EnterVehicleEvent {
public:
    unsigned int getType() const;
};
unsigned int EnterVehicleEvent::getType() const { return 9; }
} }
// REVERSED_FUNCTION: dice_hfe_EnterVehicleEvent_getType_const (0x425ff0)