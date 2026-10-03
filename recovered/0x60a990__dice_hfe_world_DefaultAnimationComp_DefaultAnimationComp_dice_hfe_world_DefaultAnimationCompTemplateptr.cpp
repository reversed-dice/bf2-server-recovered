// FUNCTION: BF2 0x60a990
namespace dice { namespace hfe { namespace world {
extern void fn_609fb0(void* a);
struct DAC { void* m_0; unsigned char _pad[0x20 - 0x8]; void* m_20; unsigned char _pad2[0x38 - 0x28]; int m_38; void* m_40; char m_48; int m_4c; char m_50; int m_54; };
void ctor_0x60a990(DAC* self, void* arg2) {
    fn_609fb0(self);
    self->m_40 = arg2;
    self->m_0 = (void*)0xb786d0;
    self->m_20 = (void*)0xb78848;
    self->m_38 = 1;
    self->m_48 = 0;
    self->m_4c = 0;
    self->m_50 = 0;
    self->m_54 = 0;
}
} } }
