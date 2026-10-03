// FUNCTION: BF2 0x6045c0
namespace dice { namespace hfe { namespace world {
extern void fn_609520(void* a);
extern void fn_603920(void* a, float b);
struct LPC { void* m_0; void* m_8; unsigned char _pad[0x58 - 0x10]; int m_58; void* m_60; void* m_68; unsigned char _pad2[0x78 - 0x70]; char m_78; char m_79; };
void ctor_0x6045c0(LPC* self) {
    fn_609520(self);
    self->m_0 = (void*)0xb76990;
    self->m_8 = (void*)0xb76a08;
    self->m_58 = 1;
    self->m_60 = (void*)0xf6c6e8;
    self->m_68 = 0;
    self->m_78 = 0;
    self->m_79 = 0;
    fn_603920(self, 0.0f);
}
} } }
