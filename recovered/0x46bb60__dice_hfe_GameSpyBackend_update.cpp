// FUNCTION: BF2 0x46bb60
namespace dice { namespace hfe {
void qr2_think(void*);
class GameSpyBackend {
public:
    char _pad[0x8];
    bool field;
    char _pad2[0xf];
    void* m_18;
    void update();
};
void GameSpyBackend::update() {
    if (!field) return;
    if (!m_18) return;
    qr2_think(m_18);
}
} }
// REVERSED_FUNCTION: dice_hfe_GameSpyBackend_update (0x46bb60)
