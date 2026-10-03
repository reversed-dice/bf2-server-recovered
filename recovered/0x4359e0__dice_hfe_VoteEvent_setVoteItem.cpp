// FUNCTION: BF2 0x4359e0
namespace dice { namespace hfe {
class VoteEvent {
public:
    char _pad[0x24];
    bool field;
    void setVoteItem(bool v);
};
void VoteEvent::setVoteItem(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_VoteEvent_setVoteItem (0x4359e0)
