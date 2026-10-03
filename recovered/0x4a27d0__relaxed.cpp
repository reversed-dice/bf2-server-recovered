// FUNCTION: BF2 0x4a27d0
namespace dice { namespace hfe {

class Player {
public:
    unsigned char getAndResetReloadState();

private:
    char _pad[0x2f4];
    unsigned char m_reloadState;
};

unsigned char Player::getAndResetReloadState() {
    unsigned char result = m_reloadState;
    m_reloadState = 0;
    return result;
}

} }
// REVERSED_FUNCTION: dice::hfe::Player::getAndResetReloadState (0x4a2640)