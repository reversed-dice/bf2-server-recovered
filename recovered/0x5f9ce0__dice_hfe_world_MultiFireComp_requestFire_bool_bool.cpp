// FUNCTION: BF2 0x5f9ce0
class MultiFireComp {
public:
    char pad0[0x40];
    int m_mode;
    char pad1[0x1e0 - 0x44];
    bool m_flag;
    bool requestFire(bool a, bool b);
};
bool MultiFireComp::requestFire(bool a, bool b) {
    if (m_mode != 2) {
        if (a)
            return false;
        m_flag = true;
        return true;
    }
    m_flag = !a;
    return true;
}
