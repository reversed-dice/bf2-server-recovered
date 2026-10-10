// FUNCTION: BF2 0x6b8f00
namespace dice { namespace anim {
class Skeleton {
public:
    void* m_0;
    char _pad8[8];
    void* m_10;
    char _pad18[8];
    float m_20;
    char _pad24[4];
    int m_28;
    char _pad2c[8];
    unsigned char m_34;
    char _pad35[2];
    unsigned char m_37;
};
struct BundlePlayer {
    void* m_0;
    void* m_8;
    Skeleton* m_skel;
    char _pad18[8];
    float m_20;
    char _pad24[8];
    float m_2c;
    float m_30;
    float m_34;
    float m_38;
    float m_3c;
    float m_40;
    unsigned char m_44;
    unsigned char m_45;
    unsigned char m_46;
    unsigned char m_47;
    float m_48;
    char _pad4c[4];
    float m_50;
    int m_54;
    void setParameters(float f1, float f2);
};
void BundlePlayer::setParameters(float f1, float f2) {
    if (f1 >= 0.0f) {
        if (m_skel->m_37) {
            m_45 = 1;
            m_34 = f1;
        }
    }
    Skeleton* s = m_skel;
    if (s->m_34 != 0) {
        m_48 = 1.0f;
    }
    else {
        m_48 = f2;
    }
    if (s->m_37 != 0) {
        return;
    }
    if (0.0f > f2) {
        if (m_44 == 0) {
            m_20 = *(float*)&s->m_28;
        }
    }
}
} }
