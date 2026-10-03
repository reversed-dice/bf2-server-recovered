// FUNCTION: BF2 0x4266e0
namespace dice { namespace hfe {

class FixPlayerTeamEvent {
public:
    unsigned int getType() const;
};

unsigned int FixPlayerTeamEvent::getType() const { return 0x45; }

} }
// REVERSED_FUNCTION: dice_hfe_FixPlayerTeamEvent_getType_const (0x4266e0)