// FUNCTION: BF2 0xad8610
namespace dice { namespace hfe { namespace animationTools {
extern void fn_6bb1c0(void* a, int b, int c, int d);
extern void* g_10936a0;
struct EOM19 { unsigned char _pad[0x30]; int m_30; void* m_38; void* m_40; void* m_48; unsigned char _pad2[0x108 - 0x50]; char m_108; };
int executeObjectMethod_0xad8610(EOM19* self) {
    if (self->m_30 != 3)
        return 0;
    int v = *(int*)self->m_38;
    int w = *(int*)self->m_40;
    int x = *(int*)self->m_48;
    self->m_108 = 0;
    fn_6bb1c0(g_10936a0, v, w, x);
    return 0;
}
} } }
