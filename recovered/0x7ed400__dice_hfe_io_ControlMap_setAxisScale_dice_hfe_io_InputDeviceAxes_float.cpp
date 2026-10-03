// FUNCTION: BF2 0x7ed400
namespace dice { namespace hfe { namespace io {
struct CM2 {
    unsigned char _pad[0x98];
    float m_axes[16];
    void setAxisScale_0x7ed400(int i, float v);
};
void CM2::setAxisScale_0x7ed400(int i, float v) {
    m_axes[i] = v;
}
} } }
