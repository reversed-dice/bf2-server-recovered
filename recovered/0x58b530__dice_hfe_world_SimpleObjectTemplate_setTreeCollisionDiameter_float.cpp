// FUNCTION: BF2 0x58b530
namespace dice { namespace hfe { namespace world {
struct SOT {
    unsigned char _pad[0xe0];
    float m_coll;
    void setTreeCollision_0x58b530(float v);
};
void SOT::setTreeCollision_0x58b530(float v) {
    m_coll = v > 0.0f ? v : 0.0f;
}
} } }
