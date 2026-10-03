// FUNCTION: BF2 0x433bf0
// Reconstructed from bf2 binary at 0x433bf0
// Namespace pattern follows existing reversed code: dice::hfe
namespace dice { namespace hfe {

struct UAVEvent {
    // Return event type id for UAVEvent.
    static unsigned long long getType() {
        return 0x2d;
    }
};

} } // namespace dice::hfe

// C linkage wrapper matching original symbol name.
extern "C" unsigned long long dice_hfe_UAVEvent_getType_const(void) {
    return dice::hfe::UAVEvent::getType();
}