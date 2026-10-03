// FUNCTION: BF2 0x717dc0
namespace dice { namespace hfe { namespace world {
extern void fn_6d6480(void* a);
struct CMC { void* m_0; unsigned char _pad[0x10 - 0x8]; int m_10; unsigned char _pad2[0x18 - 0x14]; void* m_18; char m_20; int m_24; char m_28; int m_2c; char m_30; };
void ctor_0x717dc0(CMC* self, void* arg2) {
    fn_6d6480(self);
    self->m_18 = arg2;
    self->m_0 = (void*)0xb97710;
    self->m_10 = 1;
    self->m_20 = 1;
    self->m_24 = 0;
    self->m_28 = 0;
    self->m_2c = 0;
    self->m_30 = 0;
}
} } }
