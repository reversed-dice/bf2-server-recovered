// FUNCTION: BF2 0xad8240
namespace dice { namespace hfe { namespace animationTools {
extern void fn_6bd8e0(void* a, int b, float c);
extern void* g_10936a0;
struct EOM11 { unsigned char _pad[0x30]; int m_30; void* m_38; void* m_40; unsigned char _pad2[0x108 - 0x48]; char m_108; };
int executeObjectMethod_0xad8240(EOM11* self) {
    if (self->m_30 != 2)
        return 0;
    int v = *(int*)self->m_38;
    float f = *(float*)self->m_40;
    self->m_108 = 0;
    fn_6bd8e0(g_10936a0, v, f);
    return 0;
}
} } }
