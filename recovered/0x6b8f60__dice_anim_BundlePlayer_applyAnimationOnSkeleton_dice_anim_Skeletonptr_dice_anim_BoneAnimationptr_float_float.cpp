// FUNCTION: BF2 0x6b8f60
namespace dice { namespace anim {
class BoneAnimation {
public:
    char _pad0[8];
    float m_8;
};
class Skeleton {
public:
    void* m_0;
    char _pad8[8];
    void* m_10;
    char _pad18[8];
    float m_20;
    char _pad24[4];
    float m_28;
    char _pad2c[8];
    unsigned char m_34;
    char _pad35[2];
    unsigned char m_37;
    unsigned char m_38;
    void applyAnimation(BoneAnimation* ba, float a2, float a3, float a4);
};
struct BundlePlayer {
    void* m_0;
    void* m_8;
    Skeleton* m_skel;
    char _pad18[8];
    float m_20;
    float m_24;
    unsigned char m_28;
    char _pad29[3];
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
    float getSlerpFactor() const;
    int applyAnimationOnSkeleton(Skeleton* sk, BoneAnimation* ba, float f0, float f1);
};
int BundlePlayer::applyAnimationOnSkeleton(Skeleton* sk, BoneAnimation* ba, float f0, float f1) {
    float x = f1 * getSlerpFactor();
    if (!(x <= 0.0f)) {
        float d = m_20 - f0;
        if (m_skel->m_38 != 0) {
            d = m_skel->m_28 - d;
        }
        if (m_28 != 0) {
            sk->applyAnimation(ba, m_24 * ba->m_8, x, 1.0f);
            return 1;
        }
        sk->applyAnimation(ba, d, x, 1.0f);
    }
    return 1;
}
} }
