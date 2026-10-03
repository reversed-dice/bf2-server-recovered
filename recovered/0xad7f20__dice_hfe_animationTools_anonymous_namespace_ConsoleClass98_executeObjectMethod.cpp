// FUNCTION: BF2 0xad7f20
namespace dice { namespace hfe { namespace animationTools {
extern void* g_10936a0;
struct EOM46 { unsigned char _pad[0x30]; int m_30; void* m_38; unsigned char _pad2[0x108 - 0x40]; char m_108; };
int executeObjectMethod_0xad7f20(EOM46* self) {
    if (self->m_30 != 1)
        return 0;
    char v = *(unsigned char*)self->m_38;
    self->m_108 = 0;
    *(char*)((char*)g_10936a0 + 1) = v;
    return 0;
}
} } }
