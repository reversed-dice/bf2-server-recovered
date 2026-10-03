// FUNCTION: BF2 0x4359d0
struct dice_hfe_VoteEvent {
    unsigned char __pad_00[0x25];
    unsigned char m_voteCaster;          // offset 0x25
};

void dice_hfe_VoteEvent_setVoteCaster_int(dice_hfe_VoteEvent* self, unsigned char caster)
{
    self->m_voteCaster = caster;
}
// REVERSED_FUNCTION: dice_hfe_VoteEvent_setVoteCaster_int::dice_hfe_VoteEvent_setVoteCaster_int (0x4359d0)