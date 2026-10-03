// FUNCTION: BF2 0x426240
namespace dice { namespace hfe {

class ExitVehicleEvent {
public:
    unsigned int getType() const;
};

unsigned int ExitVehicleEvent::getType() const {
    return 0xa;
}

} } // namespace
// REVERSED_FUNCTION: dice_hfe_ExitVehicleEvent_getType_const (0x426240)