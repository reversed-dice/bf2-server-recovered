// FUNCTION: BF2 0x550e40
namespace dice { namespace hfe {
class Soldier {
public:
    char _pad[0x4ec];
    int field;
    void setZiplineId(int v);
};
void Soldier::setZiplineId(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Soldier_setZiplineId (0x550e40)
