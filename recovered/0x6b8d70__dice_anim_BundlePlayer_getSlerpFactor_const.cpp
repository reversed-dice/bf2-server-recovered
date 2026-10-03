// FUNCTION: BF2 0x6b8d70
namespace dice { namespace anim {
struct BP {
    unsigned char _pad[0x30];
    float m_a;
    float m_b;
    float m_c;
    float getSlerpFactor_0x6b8d70() const;
};
float BP::getSlerpFactor_0x6b8d70() const {
    return m_a * m_b * m_c;
}
} }
