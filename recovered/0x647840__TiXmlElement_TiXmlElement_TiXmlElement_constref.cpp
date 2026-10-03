// FUNCTION: BF2 0x647840
namespace dice { namespace hfe {
extern void fn_646380(void* a, int b);
extern void fn_6477d0(void* a);
extern void fn_646f80(void* a, void* b);
struct TEC { void* m_0; unsigned char _pad[0x28 - 0x8]; void* m_28; void* m_30; unsigned char _pad2[0x58 - 0x38]; void* m_58; };
void ctor_0x647840(TEC* self, void* arg2) {
    fn_646380(self, 1);
    self->m_0 = (void*)0xb88270;
    fn_6477d0((char*)self + 0x58);
    self->m_30 = 0;
    self->m_28 = 0;
    fn_646f80(arg2, self);
}
} }
