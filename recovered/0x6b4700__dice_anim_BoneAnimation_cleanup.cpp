// FUNCTION: BF2 0x6b4700
namespace dice { namespace anim {

struct Bone {
    int m_0;
    int m_4;
    int m_8;
    int m_c;
    void* m_data;
};

class BoneAnimation {
public:
    char _pad0[0x30];
    char* m_30;
    char* m_38;
    char _pad3c[0x4a - 0x40];
    unsigned char m_4a;
    char _pad4b[0x50 - 0x4b];
    Bone* m_50;
    char _pad58[0x60 - 0x58];
    int m_60;
    void cleanup();
};

void BoneAnimation::cleanup() {
    if (m_38)
        delete[] m_38;
    if (m_30)
        delete[] m_30;
    for (int i = 0; i < m_4a; ++i) {
        if (m_50[i].m_data)
            delete[] (char*)m_50[i].m_data;
    }
    if (m_50)
        delete[] (char*)m_50;
    m_60 = 0;
}

} }
