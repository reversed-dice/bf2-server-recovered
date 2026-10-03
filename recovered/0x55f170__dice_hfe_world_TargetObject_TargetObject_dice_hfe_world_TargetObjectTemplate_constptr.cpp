// FUNCTION: BF2 0x55f170
namespace dice { namespace hfe { namespace world {
extern void fn_00573e60(void* a);
struct TOC2 { void* m_0; unsigned char _pad[0x100 - 0x8]; void* m_100; unsigned char _pad2[0x238 - 0x108]; void* m_238; int m_240; char m_244; char m_245; char m_246; int m_248; int m_24c; unsigned char _pad3[0x254 - 0x250]; int m_254; int m_258; };
void ctor_0x55f170(TOC2* self, void* arg2) {
    fn_00573e60(self);
    self->m_238 = arg2;
    self->m_0 = (void*)0xb512f0;
    self->m_100 = (void*)0xb51600;
    self->m_240 = -1;
    self->m_244 = 0;
    self->m_245 = 0;
    self->m_246 = 0;
    self->m_248 = 0;
    self->m_24c = -1;
    self->m_254 = 0;
    self->m_258 = -1;
}
} } }
