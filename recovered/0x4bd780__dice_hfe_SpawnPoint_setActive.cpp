// FUNCTION: BF2 0x4bd780
namespace dice { namespace hfe {
class SpawnPoint {
public:
    char _pad[0x23c];
    bool field;
    void setActive(bool v);
};
void SpawnPoint::setActive(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_SpawnPoint_setActive (0x4bd780)
