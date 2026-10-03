// FUNCTION: BF2 0x4c0060
namespace dice { namespace hfe {
class CommanderManager {
public:
    char _pad[0xc];
    int field;
    int getProposedCommander() const;
};
int CommanderManager::getProposedCommander() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_CommanderManager_getProposedCommander (0x4c0060)
