// FUNCTION: BF2 0xad8000
namespace dice { namespace hfe { namespace animationTools {
extern void* g_10936a0;
struct EOM47 { unsigned char _pad[0x30]; int m_30; void* m_38; unsigned char _pad2[0x108 - 0x40]; char m_108; };
int executeObjectMethod_0xad8000(EOM47* self) {
    if (self->m_30 != 1)
        return 0;
    char v = *(unsigned char*)self->m_38;
    self->m_108 = 0;
    *(char*)((char*)g_10936a0 + 0) = v;
    return 0;
}
} } }
