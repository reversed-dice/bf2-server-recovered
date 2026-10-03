// FUNCTION: BF2 0x7e7ac0
namespace dice { namespace hfe { namespace io {
extern void fn_7e5aa0(void* a);
extern void fn_4085b8(void* a);
struct ZRR { unsigned char _pad[8]; int m_8; };
int release_0x7e7ac0(ZRR* self) {
    int c = self->m_8 - 1;
    self->m_8 = c;
    if (!c) {
        if (self) {
            fn_7e5aa0(self);
            fn_4085b8(self);
        }
    }
    return c;
}
} } }
