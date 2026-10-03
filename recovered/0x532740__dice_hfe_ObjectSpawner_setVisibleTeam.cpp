// FUNCTION: BF2 0x532740
namespace dice { namespace hfe {
class ObjectSpawner {
public:
    char _pad[0x31c];
    int field;
    void setVisibleTeam(int v);
};
void ObjectSpawner::setVisibleTeam(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ObjectSpawner_setVisibleTeam (0x532740)
