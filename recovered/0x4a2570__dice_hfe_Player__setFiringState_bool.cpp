// FUNCTION: BF2 0x4a2570
namespace dice { namespace hfe {

class Player {
public:
    bool setFiringState(bool state);

private:
    unsigned char m_pad_0x0000_to_0x1E0[0x1E0];
public:
    bool m_unk_0x1E0;  // +0x1E0
private:
    unsigned char m_pad_0x1E1_to_0x294[0x294 - 0x1E0 - 1];
public:
    int m_unk_0x294;   // +0x294
};

bool Player::setFiringState(bool state) {
    if (state && !m_unk_0x1E0) {
        ++m_unk_0x294;
    }
    m_unk_0x1E0 = state;
    return state;
}

} }
// REVERSED_FUNCTION: dice::hfe::Player::setFiringState_bool (0x4a2570)