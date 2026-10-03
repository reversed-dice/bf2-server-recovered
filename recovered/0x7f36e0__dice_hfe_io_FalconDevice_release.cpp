// FUNCTION: BF2 0x7f36e0
namespace dice { namespace hfe { namespace io {
extern void fn_007f3400(void* a);
extern void fn_004085b8(void* a);
struct ZRR2 { unsigned char _pad[8]; int m_8; };
int release_0x7f36e0(ZRR2* self) {
    int c = self->m_8 - 1;
    self->m_8 = c;
    if (!c) {
        if (self) {
            fn_007f3400(self);
            fn_004085b8(self);
        }
    }
    return c;
}
} } }
