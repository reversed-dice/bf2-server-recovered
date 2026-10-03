// FUNCTION: BF2 0x44d9e0
namespace dice { namespace hfe {
class PlayerActionManager {
public:
    char _pad[0x78];
    int field;
    int getStreamManagerId() const;
};
int PlayerActionManager::getStreamManagerId() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_PlayerActionManager_getStreamManagerId (0x44d9e0)
