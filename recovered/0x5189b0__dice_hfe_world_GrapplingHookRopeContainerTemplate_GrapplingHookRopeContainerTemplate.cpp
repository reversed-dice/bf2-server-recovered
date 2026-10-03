// FUNCTION: BF2 0x5189b0
namespace dice { namespace hfe { namespace world {
extern void fn_53b7c0(void* a);
extern void fn_69f270(void* a, int b, int c);
struct GHC { void* m_0; unsigned char _pad[0x10 - 0x8]; void* m_10; unsigned char _pad2[0x68 - 0x18]; void* m_68; unsigned char _pad3[0x1c8 - 0x70]; void* m_1c8; unsigned char _pad4[0x1f8 - 0x1d0]; void* m_1f8; unsigned char _pad5[0x3d4 - 0x200]; int m_3d4; int m_3d8; };
void ctor_0x5189b0(GHC* self) {
    fn_53b7c0(self);
    self->m_0 = (void*)0xb42d10;
    self->m_10 = (void*)0xb431b0;
    self->m_68 = (void*)0xb431e8;
    self->m_1c8 = (void*)0xb43268;
    self->m_1f8 = (void*)0xb432d0;
    self->m_3d4 = 1;
    self->m_3d8 = 0x3fc00000;
    fn_69f270(self, 0x40, 0);
}
} } }
