// FUNCTION: BF2 0x73b4a0
struct Vec4 {
    float x, y, z, w;
    Vec4() {}
    Vec4(float a, float b, float c, float d) : x(a), y(b), z(c), w(d) {}
};

class Graph {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void set(Vec4 const& v);
};

struct DebugCounterManager {
    char pad0[0x30];
    Graph* m_p30;        // +0x30
    char pad1[0x14];     // 0x38..0x4b
    int m_4c;            // +0x4c
    int m_50;            // +0x50
    int m_54;            // +0x54
    int m_58;            // +0x58
    void graphPos(int, int);
};

void DebugCounterManager::graphPos(int w, int h) {
    m_4c = w;
    m_50 = h;
    if (m_p30)
        m_p30->set(Vec4(w, h, m_54, m_58));
}
