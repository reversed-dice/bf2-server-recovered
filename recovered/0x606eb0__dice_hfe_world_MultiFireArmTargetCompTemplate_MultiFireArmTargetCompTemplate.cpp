// FUNCTION: BF2 0x606eb0
namespace dice { namespace hfe { namespace world {
extern void fn_609520(void* a);
extern void fn_606250(void* a, float b);
extern void fn_606270(void* a, float b);
struct MFTC { void* m_0; void* m_8; unsigned char _pad[0x58 - 0x10]; int m_58; int m_5c; };
void ctor_0x606eb0(MFTC* self) {
    fn_609520(self);
    self->m_0 = (void*)0xb76fb0;
    self->m_8 = (void*)0xb77028;
    self->m_58 = 1;
    self->m_5c = 0x42340000;
    fn_606250(self, 0.0f);
    fn_606270(self, *(float*)0xb34b58);
}
} } }
