// FUNCTION: BF2 0x44da00
namespace dice { namespace hfe {
class PlayerActionManager {
public:
    char _pad[0x10];
    int field;
    int getRef() const;
};
int PlayerActionManager::getRef() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_PlayerActionManager_getRef (0x44da00)
