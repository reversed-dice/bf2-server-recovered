// FUNCTION: BF2 0x4a47d0
namespace dice { namespace hfe {
extern int fn_418a10(void* a, int b);
extern void* g_108a2a0;
struct SGL {
    unsigned char _pad[0x564];
    int m_564;
    int m_568;
    int calcNextMapIndex_0x4a47d0(int x) const;
};
int SGL::calcNextMapIndex_0x4a47d0(int x) const {
    int a = m_568;
    int b = m_564 + 1;
    if (a >= 0)
        b = a;
    int r = fn_418a10(g_108a2a0, x);
    return b % r;
}
} }
