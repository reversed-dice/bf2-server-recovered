// FUNCTION: BF2 0x6b4830
// BF2_FLAGS: -fno-strict-aliasing
// dice_anim_BoneAnimation_BoneAnimation (0x6b4830)

struct Sub48 { short f0; bool f2; unsigned char f3; void* f8; Sub48() : f0(0), f2(false), f3(0xf), f8(0) {} };

class Klass_6b4830 {
public:
    bool m_0x0;
    bool m_0x1;
    float m_0x4;
    float m_0x8;
    char _pad0x10[0x4];
    float m_0x10;
    int m_0x14;
    char _pad0x24[0xc];
    int m_0x24;
    char _pad0x38[0x10];
    void* m_0x38;
    char _pad0x48[0x8];
    Sub48 m_0x48;
    int m_0x58;
    float m_0x5c;
    int m_0x60;
    Klass_6b4830();
};

Klass_6b4830::Klass_6b4830() : m_0x0(false), m_0x1(true), m_0x4(0.0f), m_0x8(0.0f), m_0x10(0.0f), m_0x14(0xbf800000), m_0x24(0xffffffff), m_0x38(0), m_0x48(), m_0x58(0), m_0x5c(0.0f), m_0x60(0) { }

// REVERSED_FUNCTION: dice_anim_BoneAnimation_BoneAnimation (0x6b4830)
