// FUNCTION: BF2 0x7f9c30
namespace dice { namespace hfe { namespace io {
extern void fn_4085b8(void* a);
struct IMD { void* m_0; unsigned char _pad[0x10 - 0x8]; void* m_10; void* m_18; unsigned char _pad2[0x58 - 0x20]; void* m_58; void* m_60; };
void dtor_0x7f9c30(IMD* self) {
    self->m_0 = (void*)0xbaf630;
    fn_4085b8(self->m_58);
    fn_4085b8(self->m_60);
    fn_4085b8(self->m_10);
    fn_4085b8(self->m_18);
}
} } }
