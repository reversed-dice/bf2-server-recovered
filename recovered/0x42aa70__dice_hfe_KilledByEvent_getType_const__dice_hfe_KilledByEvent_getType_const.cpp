// FUNCTION: BF2 0x42aa70
namespace dice { namespace hfe {

class KilledByEvent {
public:
    unsigned int getType() const;
};

unsigned int KilledByEvent::getType() const { return 0x15; }

} }
// REVERSED_FUNCTION: dice_hfe_KilledByEvent_getType_const (0x42aa70)