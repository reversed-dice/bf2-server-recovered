// FUNCTION: BF2 0x5f12a0
namespace dice { namespace hfe { namespace world {
extern void dice_hfe_world_DeviationCompTemplate_DeviationCompTemplate(void* self);
struct SoldierDeviationCompTemplate {
    void* vptr;        // 0x00
    void* vptr2;       // 0x08
    char  pad10[0x14]; // 0x10
    int   m_24;        // 0x24
    float m_28, m_2c, m_30, m_34, m_38, m_3c, m_40, m_44, m_48, m_4c, m_50; // 0x28..0x50
    float m_54, m_58, m_5c, m_60; // 0x54..0x60
};
void dice_hfe_world_SoldierDeviationCompTemplate_SoldierDeviationCompTemplate(SoldierDeviationCompTemplate* self)
{
    dice_hfe_world_DeviationCompTemplate_DeviationCompTemplate(self);
    self->vptr  = (void*)0xb72170;
    self->vptr2 = (void*)0xb721f8;
    self->m_24 = 1;
    self->m_28 = 0.0f; self->m_2c = 0.0f; self->m_30 = 0.0f; self->m_34 = 0.0f;
    self->m_38 = 0.0f; self->m_3c = 0.0f; self->m_40 = 0.0f; self->m_44 = 0.0f;
    self->m_48 = 0.0f; self->m_4c = 0.0f; self->m_50 = 0.0f;
    self->m_54 = 1.0f; self->m_58 = 1.0f; self->m_5c = 1.0f; self->m_60 = 1.0f;
}
}}}
