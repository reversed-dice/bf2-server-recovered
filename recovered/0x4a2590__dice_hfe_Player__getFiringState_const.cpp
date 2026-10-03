// FUNCTION: BF2 0x4a2590
namespace dice { namespace hfe {

class Player {
    char __pad_vptr[8];
    char __pad_to_0x1E0[0x1E0 - 8];
public:
    bool m_unk_0x1E0;
private:
    char __pad_to_0x290[0x290 - 0x1E1];
public:
    bool m_unk_0x290;
    unsigned int getFiringState() const;
};

unsigned int Player::getFiringState() const {
    if (m_unk_0x1E0 || m_unk_0x290) {
        return 1;
    }
    return 0;
}

} }
// REVERSED_FUNCTION: dice::hfe::Player::getFiringState(0x4a2590)