// FUNCTION: BF2 0x6a3b20
namespace dice { namespace hfe {
class PortalManager {
public:
    char _pad[0x88];
    bool field;
    void setShowStats(bool v);
};
void PortalManager::setShowStats(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_PortalManager_setShowStats (0x6a3b20)
