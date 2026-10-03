// FUNCTION: BF2 0x46d2e0
namespace dice { namespace hfe {
class ServerQueryCache {
public:
    char _pad[0x170];
    int field;
    int getNumPlayers() const;
};
int ServerQueryCache::getNumPlayers() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_ServerQueryCache_getNumPlayers (0x46d2e0)
