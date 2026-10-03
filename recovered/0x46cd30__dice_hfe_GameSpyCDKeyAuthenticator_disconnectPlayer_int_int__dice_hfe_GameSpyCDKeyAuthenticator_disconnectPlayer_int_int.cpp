// FUNCTION: BF2 0x46cd30
namespace dice { namespace hfe {

void gcd_disconnect_user(int, int);

class GameSpyCDKeyAuthenticator {
    unsigned char m_pad[24]; // 0x00-0x17
public:
    unsigned char m_flag;    // 0x18
    void disconnectPlayer(int param_2, int param_3);
};

void GameSpyCDKeyAuthenticator::disconnectPlayer(int param_2, int param_3) {
    if (!m_flag)
        return;
    gcd_disconnect_user(param_2, param_3);
}

} }
// REVERSED_FUNCTION: dice_hfe_GameSpyCDKeyAuthenticator_disconnectPlayer_int_int (0x46cd30)