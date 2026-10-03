// FUNCTION: BF2 0x7a35e0
namespace dice { namespace hfe {
class NullResourceManager {
public:
    char _pad[0xc];
    int field;
    void setMemoryLimit(int v);
};
void NullResourceManager::setMemoryLimit(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_NullResourceManager_setMemoryLimit (0x7a35e0)
