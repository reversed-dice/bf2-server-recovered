// FUNCTION: BF2 0x6dd4e0
namespace {
    extern int* g_forceAwake;
    extern int* g_forceSleeping;
}
struct PointPhysicsNode {
    unsigned char _pad[0x14];
    unsigned char m_14;
    unsigned char _pad2[0x70 - 0x15];
    int m_70;
    int m_74;
    int getSleepiness() const;
};
int PointPhysicsNode::getSleepiness() const {
    if (m_14 == 0) {
        if (m_74 < 0) return m_74;
        return 0;
    }
    if (*g_forceAwake == 1) return m_70;
    if (*g_forceSleeping == 1) return 0;
    return m_74;
}
