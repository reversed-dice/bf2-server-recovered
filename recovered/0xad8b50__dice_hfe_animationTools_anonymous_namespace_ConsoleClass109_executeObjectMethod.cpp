// FUNCTION: BF2 0xad8b50
namespace dice { namespace hfe { namespace animationTools {
extern void fn_6bc2b0(void* a, int b, int c, int d, float e);
extern void* g_10936a0;
struct EOM27 { unsigned char _pad[0x30]; int m_30; void* m_38; void* m_40; void* m_48; void* m_50; unsigned char _pad2[0x108 - 0x58]; char m_108; };
int executeObjectMethod_0xad8b50(EOM27* self) {
    if (self->m_30 != 4)
        return 0;
    int v = *(int*)self->m_38;
    int w = *(int*)self->m_40;
    int x = *(int*)self->m_48;
    float f = *(float*)self->m_50;
    self->m_108 = 0;
    fn_6bc2b0(g_10936a0, v, w, x, f);
    return 0;
}
} } }
