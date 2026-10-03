// FUNCTION: BF2 0x4aed00
namespace dice { namespace hfe {

struct SprintState {
    unsigned char __pad_00[0x4d4]; // 0x00 - 0x0F
    float         m_stamina;      // 0x4d4
};

void SprintState_setStamina_float(SprintState* self, float stamina)
{
    self->m_stamina = stamina;
}

} } // namespace dice::hfe
// REVERSED_FUNCTION: dice_hfe_SprintState_setStamina_float::dice_hfe_SprintState_setStamina_float (0x43e070)
