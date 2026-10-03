// FUNCTION: BF2 0x420eb0
namespace dice { namespace hfe {

class ChangeSquadNameEvent {
public:
    unsigned int getType() const;
};

unsigned int ChangeSquadNameEvent::getType() const { return 0x16; }

} }
// REVERSED_FUNCTION: dice_hfe_ChangeSquadNameEvent_getType_const (0x420eb0)