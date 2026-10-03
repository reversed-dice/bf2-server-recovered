// FUNCTION: BF2 0x46bb20
namespace dice { namespace hfe {
class GameSpyBackend {
public:
    char _pad[0x8];
    bool field;
    int isInitialized() const;
};
int GameSpyBackend::isInitialized() const { return (int)field; }
} }
// REVERSED_FUNCTION: dice_hfe_GameSpyBackend_isInitialized (0x46bb20)
