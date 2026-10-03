// FUNCTION: BF2 0x429c20
namespace dice { namespace hfe {

class IssueSquadOrderEvent {
public:
    unsigned int getType() const;
};

unsigned int IssueSquadOrderEvent::getType() const { return 0x18; }

} }
// REVERSED_FUNCTION: dice_hfe_IssueSquadOrderEvent_getType_const (0x429c20)