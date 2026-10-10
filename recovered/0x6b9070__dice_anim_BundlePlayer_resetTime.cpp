// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x6b9070
namespace dice { namespace anim {
class Skeleton {
public:
    void* m_0;
    char _pad8[8];
    void* m_10;
    char _pad18[0x14];
    float m_2c;
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
    void resetTime();
};
void BundlePlayer::resetTime() {
    Skeleton* s = m_skel;
    m_45 = 0;
    m_50 = 1.0f;
    m_44 = 0;
    m_47 = 0;
    m_20 = 0.0f;
    m_46 = 0;
    m_54 = -1;
    m_40 = 0.0f;
    m_2c = 0.0f;
    m_30 = 1.0f;
    m_34 = 1.0f;
    m_38 = (s->m_2c > 0.0f) ? 0.0f : 1.0f;
    m_3c = 1.0f;
    m_48 = 1.0f;
    m_0 = s->m_0;
    m_8 = s->m_10;
}
} }
