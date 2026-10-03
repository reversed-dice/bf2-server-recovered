// FUNCTION: BF2 0x635370
namespace dice { namespace hfe { namespace world {
extern void fn_0058a480(void* a);
extern void fn_68a600(void* a, int b, int c);
struct FOC2 { void* m_0; unsigned char _pad[0x100 - 0x8]; void* m_100; unsigned char _pad2[0x230 - 0x108]; void* m_230; int m_238; unsigned char _pad3[0x240 - 0x23c]; int m_240; };
void ctor_0x635370(FOC2* self, void* arg2) {
    fn_0058a480(self);
    self->m_0 = (void*)0xb83330;
    self->m_100 = (void*)0xb83640;
    self->m_230 = arg2;
    self->m_238 = 0;
    self->m_240 = -1;
    fn_68a600(self, 0x800, 0);
}
} } }
