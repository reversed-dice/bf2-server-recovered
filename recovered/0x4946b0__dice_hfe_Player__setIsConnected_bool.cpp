// FUNCTION: BF2 0x4946b0
namespace dice { namespace hfe {

extern void* dice_hfe_g_system;

class Player {
public:
    void setIsConnected_bool(bool isConnected);
private:
    unsigned char _pad_0x000[0x200];
    bool m_isConnected;               // +0x200
    unsigned char _pad_0x201[0x7];
    double m_connectedTime;           // +0x208
};

void Player::setIsConnected_bool(bool isConnected) {
    m_isConnected = isConnected;
    if (isConnected) {
        typedef double (*TickCountFn)(void*);
        TickCountFn fn = (TickCountFn)(*(void**)((char*)(*(void**)dice_hfe_g_system) + 0x30));
        m_connectedTime = fn(dice_hfe_g_system);
    }
}

} }
// REVERSED_FUNCTION: dice::hfe::Player::setIsConnected_bool (0x4946b0)