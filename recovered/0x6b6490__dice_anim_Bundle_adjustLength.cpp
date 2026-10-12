// FUNCTION: BF2 0x6b6490
#include <algorithm>
#include <list>

struct Sub {
    bool m_flag;
    char _pad0[7];
    float m_value;
};

struct Elem {
    float m_length;
    char _pad0[4];
    Sub* m_sub;
};

class Bundle {
public:
    std::list<Elem> m_first;
    std::list<Elem> m_second;
    char _pad0[0x8];
    float m_length;
    void adjustLength();
};

void Bundle::adjustLength() {
    if (m_first.begin() == m_first.end()) return;
    float len = 0.0f;
    for (std::list<Elem>::iterator it = m_first.begin(); it != m_first.end(); ++it) {
        if (it->m_sub->m_flag) {
            float v = it->m_length + it->m_sub->m_value;
            if (v > len) len = v;
        }
    }
    std::list<Elem>& s2 = m_second;
    for (std::list<Elem>::iterator it = s2.begin(); s2.end() != it; ++it) {
        float w = it->m_length;
        if (w > len) len = w;
    }
    m_length = len;
}
