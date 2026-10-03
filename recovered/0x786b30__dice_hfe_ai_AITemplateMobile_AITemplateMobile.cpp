// FUNCTION: BF2 0x786b30
namespace dice {
namespace hfe {
namespace ai {

struct AITemplateMobile {
    void* vptr;      // 0x00
    int   m_08;      // 0x08
    float m_0c;      // 0x0c
    float m_10;      // 0x10
    float m_14;      // 0x14 (uninitialized)
    float m_18;      // 0x18
    float m_1c;      // 0x1c
    float m_20;      // 0x20
    float m_24;      // 0x24
    float m_28;      // 0x28
    float m_2c;      // 0x2c
    float m_30;      // 0x30
    bool  m_34;      // 0x34
};

void dice_hfe_ai_AITemplateMobile_AITemplateMobile(AITemplateMobile* self)
{
    self->vptr = (void*)0xba4310;
    self->m_08 = -1;
    self->m_0c = 0.0f;
    self->m_10 = 0.0f;
    self->m_18 = 0.0f;
    self->m_1c = 0.75f;
    self->m_20 = 30.0f;
    self->m_24 = 0.0f;
    self->m_28 = 0.1f;
    self->m_2c = 0.01f;
    self->m_30 = 2.0f;
    self->m_34 = false;
}

}}}
