// FUNCTION: BF2 0x73b2c0
// BF2_FLAGS: -fno-strict-aliasing
struct Vec4 {
    float x, y, z, w;
    Vec4() {}
    Vec4(float a, float b, float c, float d) : x(a), y(b), z(c), w(d) {}
};
struct DebugCounterManager {
    char pad0[0x30];
    void* m_p30;
    char pad1[0x14];
    int m_4c, m_50, m_54, m_58;
    void graphSize(int, int);
};
typedef void (*Fn)(void*, Vec4 const&);
void DebugCounterManager::graphSize(int w, int h) {
    m_54 = w;
    m_58 = h;
    if (m_p30) {
        void** vt = *(void***)m_p30;
        Fn f = (Fn)vt[4];
        f(m_p30, Vec4(m_4c, m_50, m_54, m_58));
    }
}
