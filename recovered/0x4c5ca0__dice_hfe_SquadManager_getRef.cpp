// FUNCTION: BF2 0x4c5ca0
namespace dice { namespace hfe {
class SquadManager {
public:
    char _pad[0x8];
    int field;
    int getRef() const;
};
int SquadManager::getRef() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_SquadManager_getRef (0x4c5ca0)
