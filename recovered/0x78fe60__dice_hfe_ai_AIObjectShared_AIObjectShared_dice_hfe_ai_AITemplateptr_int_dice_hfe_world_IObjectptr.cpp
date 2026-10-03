// FUNCTION: BF2 0x78fe60
namespace dice { namespace hfe { namespace ai {
extern void fn_78c560(void* a);
struct AIOS { void* m_0; unsigned char _pad[0x14 - 0x8]; int m_14; unsigned char _pad2[0x20 - 0x18]; void* m_20; unsigned char _pad3[0x60 - 0x28]; int m_60; int m_64; };
void ctor_0x78fe60(AIOS* self, void* arg2, int arg3, void* arg4) {
    fn_78c560(self);
    self->m_14 = arg3;
    self->m_20 = arg4;
    self->m_0 = (void*)0xba66d0;
    self->m_60 = 1;
    self->m_64 = -1;
}
} } }
