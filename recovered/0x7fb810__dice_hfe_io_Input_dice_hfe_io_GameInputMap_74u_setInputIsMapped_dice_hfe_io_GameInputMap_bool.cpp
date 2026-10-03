// FUNCTION: BF2 0x7fb810
namespace dice { namespace hfe { namespace io {
struct GIM { unsigned char _pad[0x128]; unsigned long m_128; };
void setInputIsMapped_0x7fb810(GIM* self, int arg2, bool arg3) {
    if (arg3)
        self->m_128 |= 1ULL << arg2;
    else
        self->m_128 &= ~(1ULL << arg2);
}
} } }
