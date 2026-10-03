// FUNCTION: BF2 0x7d5650
namespace dice { namespace hfe { namespace io {
extern void fn_0074afe0(void* a);
struct NST2 { void* m_0; unsigned char _pad[0x10 - 0x8]; void* m_10; };
void ctor_0x7d5650(NST2* self, void* arg2) {
    fn_0074afe0(self);
    self->m_10 = arg2;
    self->m_0 = (void*)0xbab0d0;
}
} } }
