// FUNCTION: BF2 0x4bfdc0
namespace dice { namespace hfe {
class ClientSquadManager {
public:
    char _pad[0x60];
    int field;
    int getRef() const;
};
int ClientSquadManager::getRef() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_ClientSquadManager_getRef (0x4bfdc0)
