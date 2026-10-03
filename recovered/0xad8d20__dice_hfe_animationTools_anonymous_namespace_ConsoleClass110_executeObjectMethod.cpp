// FUNCTION: BF2 0xad8d20
namespace dice { namespace hfe { namespace animationTools {
extern void fn_6bc080(void* a, int b, int c, int d, int e, float f);
extern void* g_10936a0;
struct EOM44 { unsigned char _pad[0x30]; int m_30; void* m_38; void* m_40; void* m_48; void* m_50; void* m_58; unsigned char _pad2[0x108 - 0x60]; char m_108; };
int executeObjectMethod_0xad8d20(EOM44* self) {
    if (self->m_30 != 5)
        return 0;
    int v = *(int*)self->m_38;
    int w = *(int*)self->m_40;
    int x = *(int*)self->m_48;
    int y = *(int*)self->m_50;
    float f = *(float*)self->m_58;
    self->m_108 = 0;
    fn_6bc080(g_10936a0, v, w, x, y, f);
    return 0;
}
} } }
