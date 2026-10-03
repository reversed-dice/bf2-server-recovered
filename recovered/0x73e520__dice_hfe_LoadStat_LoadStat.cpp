// FUNCTION: BF2 0x73e520
namespace dice { namespace hfe {
extern void fn_73e2e0(void* a);
struct LS2 { void* m_0; void* m_8; char m_10; unsigned char _pad2[0x12 - 0x11]; char m_12; unsigned char _pad3[0x18 - 0x13]; void* m_18; void* m_20; unsigned char _pad4[0x30 - 0x28]; int m_30; unsigned char _pad5[0x48 - 0x34]; char m_48; };
void ctor_0x73e520(LS2* self) {
    self->m_0 = 0;
    self->m_8 = 0;
    self->m_10 = 0;
    self->m_12 = 0;
    self->m_18 = (void*)0xf6c6e8;
    self->m_20 = (void*)0xf6c6e8;
    self->m_30 = 0xbf800000;
    self->m_48 = 0;
    fn_73e2e0(self);
}
} }
