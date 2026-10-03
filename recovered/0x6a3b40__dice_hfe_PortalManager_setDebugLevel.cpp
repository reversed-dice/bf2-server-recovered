// FUNCTION: BF2 0x6a3b40
namespace dice { namespace hfe {
class PortalManager {
public:
    char _pad[0x8c];
    int field;
    void setDebugLevel(int v);
};
void PortalManager::setDebugLevel(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_PortalManager_setDebugLevel (0x6a3b40)
