// FUNCTION: BF2 0x5b5050
namespace dice { namespace hfe {

class Player {
public:
    void* getFreeCamera() const;
private:
    unsigned char pad_0x00[0x40];
public:
    void* m_game;  // +0x40
};

void* Player::getFreeCamera() const {
    if (m_game == 0) {
        return 0;
    }
    return *(void**)((char*)m_game + 8);
}

} }
// REVERSED_FUNCTION: dice::hfe::Player::getFreeCamera_const (0x496ce0)