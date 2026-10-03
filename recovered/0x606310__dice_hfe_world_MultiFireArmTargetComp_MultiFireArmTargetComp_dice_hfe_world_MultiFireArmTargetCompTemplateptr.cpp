// FUNCTION: BF2 0x606310
namespace dice { namespace hfe { namespace world {
extern void fn_608d20(void* a);
struct MFATC { void* m_0; unsigned char _pad[0x20 - 0x8]; void* m_20; unsigned char _pad2[0x80 - 0x28]; int m_80; char m_84; char m_85; int m_88; int m_8c; void* m_90; };
void ctor_0x606310(MFATC* self, void* arg2) {
    fn_608d20(self);
    self->m_90 = arg2;
    self->m_0 = (void*)0xb76c30;
    self->m_20 = (void*)0xb76e08;
    self->m_80 = 1;
    self->m_84 = 0;
    self->m_85 = 0;
    self->m_88 = 0;
    self->m_8c = 0;
}
} } }
