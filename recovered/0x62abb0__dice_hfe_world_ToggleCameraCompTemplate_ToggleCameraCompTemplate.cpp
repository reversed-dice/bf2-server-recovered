// FUNCTION: BF2 0x62abb0
namespace dice { namespace hfe { namespace world {
extern void fn_62bd80(void* a);
struct TCC { void* m_0; void* m_8; unsigned char _pad[0x18 - 0x10]; int m_18; int m_1c; int m_20; int m_24; int m_28; char m_2c; char m_2d; };
void ctor_0x62abb0(TCC* self) {
    fn_62bd80(self);
    self->m_0 = (void*)0xb803b0;
    self->m_8 = (void*)0xb80428;
    self->m_18 = 1;
    self->m_1c = -1;
    self->m_20 = 2;
    self->m_24 = -1;
    self->m_28 = 2;
    self->m_2c = 0;
    self->m_2d = 1;
}
} } }
