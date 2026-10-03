// FUNCTION: BF2 0x60a710
namespace dice { namespace hfe { namespace world {
struct RF2 { unsigned char _pad[0x48]; char m_48; unsigned char _pad2[0x4c - 0x49]; int m_4c; };
bool requestFire_0x60a710(RF2* self, bool arg2, bool arg3) {
    if (!self->m_48 && !self->m_4c)
        return 1;
    return 0;
}
} } }
