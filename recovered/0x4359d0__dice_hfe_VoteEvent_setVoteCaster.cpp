// FUNCTION: BF2 0x4359d0
namespace dice { namespace hfe {
class VoteEvent {
public:
    char _pad[0x25];
    bool field;
    void setVoteCaster(bool v);
};
void VoteEvent::setVoteCaster(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_VoteEvent_setVoteCaster (0x4359d0)
