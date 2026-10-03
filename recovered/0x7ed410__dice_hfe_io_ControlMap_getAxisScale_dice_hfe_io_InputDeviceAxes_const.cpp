// FUNCTION: BF2 0x7ed410
namespace dice { namespace hfe { namespace io {
struct CM {
    unsigned char _pad[0x98];
    float m_axes[16];
    float getAxisScale_0x7ed410(int i) const;
};
float CM::getAxisScale_0x7ed410(int i) const {
    return m_axes[i];
}
} } }
