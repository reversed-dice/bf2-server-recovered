// FUNCTION: BF2 0x707a90
struct BspNode {
    char pad0[0x8];
    void* m_8;           // +0x8
    char pad1[0x18];     // 0x10..0x27
    BspNode* m_28;       // +0x28
    BspNode* m_30;       // +0x30
    void destroy();
};

void BspNode::destroy() {
    if (m_8) {
        operator delete[](m_8);
        m_8 = 0;
    }
    if (m_28) {
        m_28->destroy();
        operator delete(m_28);
        m_28 = 0;
    }
    if (m_30) {
        m_30->destroy();
        operator delete(m_30);
        m_30 = 0;
    }
}
