// BF2_FLAGS: -fno-strict-aliasing
// dice_hfe_CameraUpdate_CameraUpdate (0x4f4b80)

struct Sub1c {
    volatile float f0; volatile float f4; volatile float f8; volatile int fc;
    void init() { fc = 0x3f800000; f0 = 0.0f; f4 = 0.0f; f8 = 0.0f; }
};
struct Sub2c {
    volatile float f0; volatile float f4; volatile float f8;
    void init() { f0 = 0.0f; f4 = 0.0f; f8 = 0.0f; }
};
class Klass_4f4b80 {
public:
    int m_0x0; int m_0x4; int m_0x8;
    char _pad0x1c[0x10];
    Sub1c m_0x1c;
    Sub2c m_0x2c;
    Klass_4f4b80();
};
Klass_4f4b80::Klass_4f4b80() : m_0x0(0), m_0x4(0), m_0x8(0xffffffff)
{
    m_0x1c.init();
    m_0x2c.init();
}
// FUNCTION: BF2 0x4f4b80
