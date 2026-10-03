// FUNCTION: BF2 0x54b290
namespace dice { namespace hfe { namespace world {
extern void fn_54acb0(void* a);
struct SOL5 {
    unsigned char _pad[0x3d8];
    float m_3d8;
    unsigned char _pad2[0x3f0 - 0x3dc];
    void* m_3f0;
    void setLookLeftRightAngle_0x54b290(float arg2);
};
void SOL5::setLookLeftRightAngle_0x54b290(float arg2) {
    if (!m_3f0) {
        m_3d8 = arg2;
        fn_54acb0(this);
    }
}
} } }
