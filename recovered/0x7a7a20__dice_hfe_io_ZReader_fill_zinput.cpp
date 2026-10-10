// FUNCTION: BF2 0x7a7a20
// BF2_FLAGS: -fno-strict-aliasing
struct ZState {
    void* m_0;
    int m_8;
};

struct ZReader {
    char pad0[0x8];
    ZState* m_8;
    void* m_10;
    int m_18;
    void* m_20;
    bool fill_zinput();
};

bool ZReader::fill_zinput() {
    if (m_8->m_8 != 0)
        return false;
    int r = ((int (*)(void*, void*, unsigned int))(*(void***)m_10)[4])(m_10, m_20, m_18);
    m_8->m_0 = m_20;
    m_8->m_8 = r;
    if (r == 0)
        return true;
    return false;
}
