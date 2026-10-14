// FUNCTION: BF2 0x5aef50
// Target: 0x5aef50
namespace dice { namespace hfe { namespace world {

class IObject {};

class ArmorGLComp {
public:
    char _pad[0x88];
    IObject* m_colList[16];   // 0x88
    float m_colWeights[16];   // 0x108
    int m_head;               // 0x148
    int m_tail;               // 0x14c

    void addColObject(IObject* obj);
};

void ArmorGLComp::addColObject(IObject* obj) {
    float w = 1.0f;
    int i = m_head;
    if (m_tail != m_head) {
        while (i != m_tail) {
            float weight = m_colWeights[i];
            i = (i + 1) & 0xf;
            w -= weight;
        }
        if (w < 0.0f) w = 0.0f;
    }
    m_colList[i] = obj;
    m_colWeights[m_tail] = w;
    m_tail = (m_tail + 1) & 0xf;
    if (m_tail == m_head) {
        m_head = (m_head + 1) & 0xf;
    }
}

} } }
