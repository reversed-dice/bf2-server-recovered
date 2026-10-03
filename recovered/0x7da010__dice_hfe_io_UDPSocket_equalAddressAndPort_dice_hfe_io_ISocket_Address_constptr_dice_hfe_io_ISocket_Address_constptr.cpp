// FUNCTION: BF2 0x7da010
namespace dice { namespace hfe { namespace io {
struct EAP { unsigned char _pad[2]; unsigned short m_2; int m_4; };
bool equalAddressAndPort_0x7da010(EAP* self, void* arg2) {
    if (self->m_4 == *(int*)((char*)arg2 + 4) && self->m_2 == *(unsigned short*)((char*)arg2 + 2))
        return 1;
    return 0;
}
} } }
