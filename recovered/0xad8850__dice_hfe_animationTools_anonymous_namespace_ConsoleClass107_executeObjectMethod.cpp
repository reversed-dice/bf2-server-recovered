// FUNCTION: BF2 0xad8850
namespace dice { namespace hfe { namespace animationTools {
extern void fn_006bbf90(void* a, int b, int c);
extern void* g_10936a0;
struct EOM13 { unsigned char _pad[0x30]; int m_30; void* m_38; void* m_40; unsigned char _pad2[0x108 - 0x48]; char m_108; };
int executeObjectMethod_0xad8850(EOM13* self) {
    if (self->m_30 != 2)
        return 0;
    int v = *(int*)self->m_38;
    int w = *(int*)self->m_40;
    self->m_108 = 0;
    fn_006bbf90(g_10936a0, v, w);
    return 0;
}
} } }
