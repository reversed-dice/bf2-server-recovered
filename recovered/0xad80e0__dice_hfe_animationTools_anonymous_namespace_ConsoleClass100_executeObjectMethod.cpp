// FUNCTION: BF2 0xad80e0
namespace dice { namespace hfe { namespace animationTools {
extern void* g_10936a0;
struct EOM48 { unsigned char _pad[0x30]; int m_30; void* m_38; unsigned char _pad2[0x108 - 0x40]; char m_108; };
int executeObjectMethod_0xad80e0(EOM48* self) {
    if (self->m_30 != 1)
        return 0;
    int v = *(int*)self->m_38;
    self->m_108 = 0;
    *(int*)((char*)g_10936a0 + 4) = v;
    return 0;
}
} } }
