// FUNCTION: BF2 0x697e10
namespace dice { namespace hfe {
class ObjectManager {
public:
    char _pad[0x2b0];
    int field;
    void setOverrideLineTestLod(int v);
};
void ObjectManager::setOverrideLineTestLod(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ObjectManager_setOverrideLineTestLod (0x697e10)
