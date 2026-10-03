// FUNCTION: BF2 0x73c940
namespace dice { namespace hfe {
class DebugCounterManager {
public:
    char _pad[0x14];
    bool field;
    void enable(bool v);
};
void DebugCounterManager::enable(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_DebugCounterManager_enable (0x73c940)
