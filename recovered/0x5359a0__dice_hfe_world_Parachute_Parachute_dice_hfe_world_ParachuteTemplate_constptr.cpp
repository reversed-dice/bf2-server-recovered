// FUNCTION: BF2 0x5359a0
namespace dice { namespace hfe { namespace world {
extern void fn_53a500(void* a);
extern void fn_535920(void* a);
struct PAR { void* m_0; unsigned char _pad[0x100 - 0x8]; void* m_100; unsigned char _pad2[0x238 - 0x108]; void* m_238; void* m_240; unsigned char _pad3[0x5fc - 0x248]; int m_5fc; unsigned char _pad4[0x610 - 0x600]; void* m_610; };
void ctor_0x5359a0(PAR* self) {
    fn_53a500(self);
    self->m_0 = (void*)0xb494d0;
    self->m_100 = (void*)0xb49a98;
    self->m_238 = (void*)0xb49ad0;
    self->m_240 = (void*)0xb49da0;
    self->m_5fc = 1;
    self->m_610 = 0;
    fn_535920(self);
}
} } }
