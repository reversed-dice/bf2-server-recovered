// FUNCTION: BF2 0x7d71a0
namespace dice { namespace hfe { namespace io {
extern void fn_007d6de0(void* a, int b);
extern void fn_007d6890(void* a);
struct PQ2 { unsigned char _pad[0x28]; char m_28; };
void ctor_0x7d71a0(PQ2* self) {
    char s[0x30];
    self->m_28 = 0;
    fn_007d6de0(s, 0x40);
    fn_007d6890(s);
}
} } }
