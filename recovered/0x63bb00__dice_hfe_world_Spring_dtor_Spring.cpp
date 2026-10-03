// FUNCTION: BF2 0x63bb00
namespace dice { namespace hfe { namespace world {
extern void fn_4085b8(void* a);
extern void fn_7680f0(void* a);
extern void fn_573ec0(void* a);
struct SPD3 { void* m_0; unsigned char _pad[0x100 - 0x8]; void* m_100; unsigned char _pad2[0x270 - 0x108]; void* m_270; void* m_278; };
void dtor_0x63bb00(SPD3* self) {
    self->m_0 = (void*)0xb85930;
    self->m_100 = (void*)0xb85c48;
    void* p = self->m_278;
    if (p) {
        int n = *(int*)p - 1;
        *(int*)p = n;
        if (n == 0)
            fn_4085b8(p);
    }
    void* q = self->m_270;
    if (q) {
        fn_7680f0(q);
        fn_4085b8(q);
    }
    fn_573ec0(self);
}
} } }
