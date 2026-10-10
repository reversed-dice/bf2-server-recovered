// FUNCTION: BF2 0x5ffbd0
enum FireState {
    FIRE_STATE_NONE = 0,
    FIRE_STATE_ONE = 1,
    FIRE_STATE_TWO = 2
};

class ThrownFireComp {
public:
    char _pad0[0x174];
    unsigned char m_flag;
    bool setThrowState(FireState state, bool force);
    bool requestFire(bool blocked, bool value);
};

bool ThrownFireComp::requestFire(bool blocked, bool value) {
    if (blocked) return false;
    if (!setThrowState(FIRE_STATE_TWO, true)) return false;
    m_flag = value;
    return true;
}
