// FUNCTION: BF2 0x42b3f0
namespace dice { namespace hfe {

class MedalEvent {
public:
    unsigned int getType() const;
};

unsigned int MedalEvent::getType() const { return 0x29; }

} }
// REVERSED_FUNCTION: dice_hfe_MedalEvent_getType_const (0x42b3f0)