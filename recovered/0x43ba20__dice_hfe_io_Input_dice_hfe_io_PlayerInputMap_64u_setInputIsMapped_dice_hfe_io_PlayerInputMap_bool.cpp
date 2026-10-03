// FUNCTION: BF2 0x43ba20
namespace dice { namespace hfe { namespace io {
struct SIIM { unsigned char _pad[0x100]; unsigned long m_100; };
void setInputIsMapped_0x43ba20(SIIM* self, int arg2, bool arg3) {
    if (arg3)
        self->m_100 |= 1ULL << arg2;
    else
        self->m_100 &= ~(1ULL << arg2);
}
} } }
