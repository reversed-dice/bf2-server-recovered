// FUNCTION: BF2 0x4359e0
namespace dice { namespace hfe {

struct GameEvent {
    void* vptr;          // 0x00
    int   m_field_08;    // 0x08
    int   m_field_0c;    // 0x0C
};

struct VoteEvent : GameEvent {
    unsigned char __pad_10[0x14]; // 0x10 - 0x23
    unsigned char m_voteItem;     // 0x24
};

void VoteEvent_setVoteItem_int(VoteEvent* self, unsigned char item)
{
    self->m_voteItem = item;
}

} } // namespace dice::hfe
// REVERSED_FUNCTION: dice_hfe_VoteEvent_setVoteItem_int::dice_hfe_VoteEvent_setVoteItem_int (0x4359e0)
