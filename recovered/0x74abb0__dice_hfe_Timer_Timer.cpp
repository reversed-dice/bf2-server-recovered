// FUNCTION: BF2 0x74abb0
namespace dice { namespace hfe {
extern void fn_0074b140(void* a);
extern long fn_0074b150(void* a);
extern void fn_74ab30(void* a, double b);
struct TMR2 { unsigned char _pad[0x28]; double m_28; };
void ctor_0x74abb0(TMR2* self) {
    fn_0074b140(self);
    long t = fn_0074b150(self);
    self->m_28 = 0x4035f0a3d70a3d70 / (double)t;
    fn_74ab30(self, 0);
}
} }
