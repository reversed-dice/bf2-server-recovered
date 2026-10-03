// FUNCTION: BF2 0x4419a0
namespace dice { namespace hfe {
class GameEventManager {
public:
    char _pad[0x10];
    int field;
    int getRef() const;
};
int GameEventManager::getRef() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_GameEventManager_getRef (0x4419a0)
