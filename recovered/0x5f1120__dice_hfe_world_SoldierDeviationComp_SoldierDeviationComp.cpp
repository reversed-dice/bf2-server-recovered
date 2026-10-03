// FUNCTION: BF2 0x5f1120
namespace dice {
namespace hfe {
namespace world {

struct SoldierDeviationCompTemplate;

extern void dice_hfe_world_DeviationComp_DeviationComp(void* self, void* tpl);

struct SoldierDeviationComp {
    void* vptr;          // 0x00
    char  pad08[0x18];   // 0x08
    void* vptr20;        // 0x20
    char  pad28[0x20];   // 0x28
    int   m_48;          // 0x48
    float m_4c;          // 0x4c
    float m_50;          // 0x50
    float m_54;          // 0x54
    float m_58;          // 0x58
    float m_5c;          // 0x5c
    bool  m_60;          // 0x60
    char  pad61[0x07];   // 0x61
    void* m_68;          // 0x68
    float m_70;          // 0x70
    char  pad74[0x04];   // 0x74
    void* m_78;          // 0x78
};

void dice_hfe_world_SoldierDeviationComp_SoldierDeviationComp(
        SoldierDeviationComp* self, SoldierDeviationCompTemplate* tpl)
{
    dice_hfe_world_DeviationComp_DeviationComp(self, tpl);
    self->m_78  = tpl;
    self->vptr   = (void*)0xb71e70;
    self->vptr20 = (void*)0xb71ff8;
    self->m_48 = 1;
    self->m_4c = 0.0f;
    self->m_50 = 0.0f;
    self->m_54 = 0.0f;
    self->m_58 = 1.0f;
    self->m_5c = 1.0f;
    self->m_60 = false;
    self->m_68 = (void*)0x759dc150;
    self->m_70 = 0.0f;
}

}}}
