// FUNCTION: BF2 0x56c240
namespace dice { namespace hfe { namespace world {
extern void fn_573010(void* a, void* b);
extern void fn_522610(void* a);
extern void fn_58b170(void* a);
extern void fn_4085b8(void* a);
struct ZD2 { void* m_0; unsigned char _pad[0x100 - 0x8]; void* m_100; unsigned char _pad2[0x230 - 0x108]; void* m_230; unsigned char _pad3[0x258 - 0x238]; int m_258; };
void dtor_0x56c240(ZD2* self) {
    int v = self->m_258;
    self->m_0 = (void*)0xb54f30;
    self->m_100 = (void*)0xb55240;
    fn_573010((void*)0x108f4c0, &v);
    fn_522610((char*)self + 0x230);
    fn_58b170(self);
    fn_4085b8(self);
}
} } }
