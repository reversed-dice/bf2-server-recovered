// FUNCTION: BF2 0x4c0040
namespace dice { namespace hfe {
class CommanderManager {
public:
    char _pad[0x8];
    int field;
    int getCommander() const;
};
int CommanderManager::getCommander() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_CommanderManager_getCommander (0x4c0040)
