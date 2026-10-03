// FUNCTION: BF2 0x449550
namespace dice { namespace hfe {
class GhostManager {
public:
    char _pad[0x1c];
    int field;
    void setConnectionId(int v);
};
void GhostManager::setConnectionId(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_GhostManager_setConnectionId (0x449550)
