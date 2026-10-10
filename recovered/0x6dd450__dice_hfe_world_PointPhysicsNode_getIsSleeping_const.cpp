// FUNCTION: BF2 0x6dd450
namespace {
    extern int* g_forceAwake;
    extern int* g_forceSleeping;
}
struct PointPhysicsNode {
    unsigned char _pad[0x14];
    unsigned char m_14;
    unsigned char _pad2[0x74 - 0x15];
    int m_74;
    bool getIsSleeping() const;
};
bool PointPhysicsNode::getIsSleeping() const {
    if (m_14 == 0) return true;
    if (*g_forceAwake == 1) return false;
    if (*g_forceSleeping == 1) return true;
    return m_74 <= 0;
}
