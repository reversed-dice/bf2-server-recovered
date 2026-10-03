// FUNCTION: BF2 0x4b6630
namespace dice {
namespace hfe {
namespace world {

struct Material {
    void* vptr;      // 0x00
    void* m_08;      // 0x08
    int   m_10;      // 0x10
    float m_14;      // 0x14
    float m_18;      // 0x18
    float m_1c;      // 0x1c
    float m_20;      // 0x20
    float m_24;      // 0x24
    float m_28;      // 0x28
    float m_2c;      // 0x2c
    float m_30;      // 0x30
    bool  m_34;      // 0x34
    bool  m_35;      // 0x35
    bool  m_36;      // 0x36
    bool  m_37;      // 0x37
    bool  m_38;      // 0x38
};

void dice_hfe_world_Material_Material(Material* self)
{
    self->vptr = (void*)0xb365d0;
    self->m_08 = (void*)0xf6c6e8;
    self->m_10 = 1;
    self->m_14 = 1.0f;
    self->m_18 = 0.0f;
    self->m_1c = 0.01f;
    self->m_20 = 0.0f;
    self->m_24 = -1.0f;
    self->m_28 = 0.0f;
    self->m_2c = 100000.0f;
    self->m_30 = 0.1f;
    self->m_34 = false;
    self->m_35 = false;
    self->m_36 = false;
    self->m_37 = false;
    self->m_38 = false;
}

}}}
