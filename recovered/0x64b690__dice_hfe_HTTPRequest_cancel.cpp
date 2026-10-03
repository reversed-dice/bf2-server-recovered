// FUNCTION: BF2 0x64b690
namespace dice { namespace hfe {
extern void fn_818b10(int a);
struct HRC2 { unsigned char _pad[8]; char m_8; int m_c; void* m_10; int m_18; int m_1c; };
int cancel_0x64b690(HRC2* self) {
    self->m_1c = 1;
    int h1 = self->m_18;
    if (h1 >= 0) {
        fn_818b10(h1);
        self->m_18 = -1;
    }
    if (self->m_10)
        self->m_10 = 0;
    int h2 = self->m_c;
    if (h2 < 0)
        return 0;
    fn_818b10(h2);
    self->m_c = -1;
    self->m_8 = 0;
    return 1;
}
} }
