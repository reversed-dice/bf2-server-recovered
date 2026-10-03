// FUNCTION: BF2 0x7d7170
namespace dice { namespace hfe { namespace io {
extern void fn_7d6de0(void* a, int b);
extern void fn_7d6890(void* a);
struct PQ { unsigned char _pad[0x28]; char m_28; };
void ctor_0x7d7170(PQ* self) {
    char s[0x30];
    self->m_28 = 0;
    fn_7d6de0(s, 0x40);
    fn_7d6890(s);
}
} } }
