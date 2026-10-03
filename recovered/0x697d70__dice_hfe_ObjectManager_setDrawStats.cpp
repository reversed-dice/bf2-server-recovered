// FUNCTION: BF2 0x697d70
namespace dice { namespace hfe {
class ObjectManager {
public:
    char _pad[0x2a0];
    int field;
    void setDrawStats(int v);
};
void ObjectManager::setDrawStats(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ObjectManager_setDrawStats (0x697d70)
