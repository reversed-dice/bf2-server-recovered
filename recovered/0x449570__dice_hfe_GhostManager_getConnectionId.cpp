// FUNCTION: BF2 0x449570
namespace dice { namespace hfe {
class GhostManager {
public:
    char _pad[0x1c];
    int field;
    int getConnectionId() const;
};
int GhostManager::getConnectionId() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_GhostManager_getConnectionId (0x449570)
