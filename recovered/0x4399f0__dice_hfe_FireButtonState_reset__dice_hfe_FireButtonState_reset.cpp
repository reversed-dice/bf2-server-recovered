// FUNCTION: BF2 0x4399f0
struct dice_hfe_FireButtonState {
    int m_state; // 0x00
};

void dice_hfe_FireButtonState_reset(struct dice_hfe_FireButtonState* self)
{
    self->m_state = 0;
}
// REVERSED_FUNCTION: dice_hfe_FireButtonState_reset::dice_hfe_FireButtonState_reset (0x4399f0)