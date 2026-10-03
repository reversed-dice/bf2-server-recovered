// FUNCTION: BF2 0x5e33b0
namespace dice { namespace hfe { namespace world {
extern int fn_74aaa0(float a, float b);
struct GFA2 {
    unsigned char _pad[0x2f8];
    float m_2f8;
    float m_2fc;
    int m_300;
    void setZoomFactor_0x5e33b0(float a, float b);
};
void GFA2::setZoomFactor_0x5e33b0(float a, float b) {
    m_2f8 = a;
    m_2fc = a;
    m_300 = fn_74aaa0(a, b);
}
} } }
