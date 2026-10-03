// FUNCTION: BF2 0x5ff770
namespace dice { namespace hfe { namespace world {
class SpawnObjectFireComp {
public:
    typedef void (*Fn)(SpawnObjectFireComp*, int, int);
    bool preEnable();
};
bool SpawnObjectFireComp::preEnable() {
    Fn fn = (Fn)(*(void***)this)[40];
    fn(this, 0, -1);
    return false;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_SpawnObjectFireComp_preEnable (0x5ff770)
