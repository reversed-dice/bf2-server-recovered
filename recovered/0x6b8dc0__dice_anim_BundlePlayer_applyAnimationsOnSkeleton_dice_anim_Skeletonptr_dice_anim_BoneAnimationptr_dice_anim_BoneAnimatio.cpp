// FUNCTION: BF2 0x6b8dc0
namespace dice { namespace anim {
class BoneAnimation {};
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
    void applyAnimations(BoneAnimation* a1, BoneAnimation* a2, float a3, float a4, float a5, float a6, float a7);
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
    float getSlerpFactor() const;
    int applyAnimationsOnSkeleton(Skeleton* sk, BoneAnimation* a1, BoneAnimation* a2, float f0, float f1);
};
int BundlePlayer::applyAnimationsOnSkeleton(Skeleton* sk, BoneAnimation* a1, BoneAnimation* a2, float f0, float f1) {
    float alpha = getSlerpFactor();
    if (!(alpha <= 0.001f)) {
        float cur = m_20;
        if (m_skel->m_38 != 0) {
            cur = m_skel->m_28 - cur;
        }
        sk->applyAnimations(a1, a2, cur, f1 + cur, f0, alpha, m_3c);
    }
    return 1;
}
} }
