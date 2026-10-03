// FUNCTION: BF2 0x6479d0
namespace dice { namespace hfe {
extern void fn_646380(void* a, int b);
extern void fn_6477d0(void* a);
extern void fn_6445f0(void* a, void* b);
struct TE5 { void* m_0; unsigned char _pad[0x28 - 0x8]; void* m_28; void* m_30; unsigned char _pad2[0x38 - 0x38]; void* m_38; unsigned char _pad3[0x58 - 0x40]; void* m_58; };
void ctor_0x6479d0(TE5* self, void* arg2) {
    fn_646380(self, 1);
    self->m_0 = (void*)0xb88270;
    fn_6477d0((char*)self + 0x58);
    self->m_30 = 0;
    self->m_28 = 0;
    fn_6445f0((char*)self + 0x38, arg2);
}
} }
