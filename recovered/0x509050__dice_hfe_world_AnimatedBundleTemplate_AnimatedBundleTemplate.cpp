// FUNCTION: BF2 0x509050
namespace dice { namespace hfe { namespace world {
extern void fn_5767f0(void* a);
struct ABT { void* m_0; unsigned char _pad[0x10 - 0x8]; void* m_10; unsigned char _pad2[0x68 - 0x18]; void* m_68; unsigned char _pad3[0x1c8 - 0x70]; void* m_1c8; unsigned char _pad4[0x1f4 - 0x1d0]; int m_1f4; void* m_1f8; void* m_200; void* m_208; };
void ctor_0x509050(ABT* self) {
    fn_5767f0(self);
    self->m_0 = (void*)0xb3d410;
    self->m_10 = (void*)0xb3d6a0;
    self->m_68 = (void*)0xb3d6d8;
    self->m_1c8 = (void*)0xb3d758;
    self->m_1f4 = 1;
    self->m_1f8 = 0;
    self->m_208 = 0;
    self->m_200 = 0;
}
} } }
