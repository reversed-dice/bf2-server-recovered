// FUNCTION: BF2 0x46cc90
void gcd_think();

namespace dice { namespace hfe {

class GameSpyCDKeyAuthenticator {
public:
    void update();

private:
    void* vtable;                 // 0x00
    unsigned char _pad_0x08[0x10]; // 0x08
    bool m_active;                // 0x18
};

void GameSpyCDKeyAuthenticator::update() {
    if (m_active) {
        gcd_think();
    }
}

} } // namespace dice::hfe
// REVERSED_FUNCTION: dice_hfe_GameSpyCDKeyAuthenticator_update (0x46cc90)