// FUNCTION: BF2 0x8246a0
namespace dice { namespace hfe {
extern void fn_408298(int a);
extern void fn_8243b0(void* a);
struct SBEC { unsigned char _pad[8]; char m_8; unsigned char _pad2[0x20 - 0x9]; char m_20; unsigned char _pad3[0x38 - 0x21]; int m_38; };
void SBEngineCleanup_0x8246a0(SBEC* self) {
    fn_408298(self->m_38);
    self->m_38 = -1;
    fn_8243b0((char*)self + 0x20);
    fn_8243b0((char*)self + 8);
}
} }
