// FUNCTION: BF2 0x5fce40
namespace dice { namespace hfe { namespace world {
extern void fn_5fcd90(void* a, int b);
struct FCUS2 { unsigned char _pad[0x164]; int m_164; unsigned char _pad2[0x16c - 0x168]; char m_16c; unsigned char _pad3[0x170 - 0x16d]; char m_170; };
void fireCompleteUpdateStates_0x5fce40(FCUS2* self) {
    self->m_16c = 0;
    self->m_164 = 0;
    fn_5fcd90(self, 1);
    self->m_170 = 0;
}
} } }
