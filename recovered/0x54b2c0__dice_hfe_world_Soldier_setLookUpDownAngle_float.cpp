// FUNCTION: BF2 0x54b2c0
namespace dice { namespace hfe { namespace world {
extern void fn_54acb0(void* a);
struct SOL6 {
    unsigned char _pad[0x3d0];
    float m_3d0;
    unsigned char _pad2[0x3f0 - 0x3d4];
    void* m_3f0;
    void setLookUpDownAngle_0x54b2c0(float arg2);
};
void SOL6::setLookUpDownAngle_0x54b2c0(float arg2) {
    if (!m_3f0) {
        m_3d0 = arg2;
        fn_54acb0(this);
    }
}
} } }
