// FUNCTION: BF2 0x74ab70
namespace dice { namespace hfe {
extern void fn_74b140(void* a);
extern long fn_74b150(void* a);
extern void fn_74ab30(void* a, double b);
struct TMR { unsigned char _pad[0x28]; double m_28; };
void ctor_0x74ab70(TMR* self) {
    fn_74b140(self);
    long t = fn_74b150(self);
    self->m_28 = 0x4035f0a3d70a3d70 / (double)t;
    fn_74ab30(self, 0);
}
} }
