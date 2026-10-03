// FUNCTION: BF2 0x4a23d0
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0xf5];
    bool isAlive;
    char _pad2[0x12];
    char field_108;
    char _pad3[0x343];
    int health;
    void setIsAlive(bool alive);
};
void Player::setIsAlive(bool alive) {
    if (!alive) {
        field_108 = 0;
    }
    isAlive = alive;
    health = -1;
}
}
}

// REVERSED_FUNCTION: dice_hfe_Player_setIsAlive_bool (0x4a23d0)
