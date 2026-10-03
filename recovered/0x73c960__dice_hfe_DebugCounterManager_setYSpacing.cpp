// FUNCTION: BF2 0x73c960
namespace dice { namespace hfe {
class DebugCounterManager {
public:
    char _pad[0x24];
    int field;
    void setYSpacing(int v);
};
void DebugCounterManager::setYSpacing(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_DebugCounterManager_setYSpacing (0x73c960)
