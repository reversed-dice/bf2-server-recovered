// FUNCTION: BF2 0x5eb020
namespace dice { namespace hfe { namespace world {
extern void fn_5ea540(void* a, float b);
extern void fn_5ea560(void* a, float b);
extern void fn_5ea580(void* a, float b);
struct ACT2b { void* m_0; void* m_8; int m_10; int m_14; int m_18; unsigned char _pad[0x2c - 0x1c]; int m_2c; char m_30; char m_31; unsigned char _pad2[0x3c - 0x32]; int m_3c; int m_40; int m_44; char m_48; char m_49; unsigned char _pad3[0x50 - 0x4a]; void* m_50; };
void ctor_0x5eafa0(ACT2b* self) {
    self->m_0 = (void*)0xb6fdf0;
    self->m_8 = (void*)0xb6fe68;
    self->m_10 = 0;
    self->m_14 = 0x40000000;
    self->m_2c = 0x3f333333;
    self->m_30 = 0;
    self->m_31 = 0;
    self->m_3c = 5;
    self->m_40 = 0x1e;
    self->m_44 = 0;
    self->m_48 = 0;
    self->m_49 = 1;
    self->m_50 = (void*)0xf6c6e8;
    self->m_18 = 0x3c;
    fn_5ea540(self, 0.0f);
    fn_5ea560(self, 0.0f);
    fn_5ea580(self, 0.0f);
}
} } }
