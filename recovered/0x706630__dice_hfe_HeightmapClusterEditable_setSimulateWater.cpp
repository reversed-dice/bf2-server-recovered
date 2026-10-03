// FUNCTION: BF2 0x706630
namespace dice { namespace hfe {
class HeightmapClusterEditable {
public:
    char _pad[0x46];
    bool field;
    void setSimulateWater(bool v);
};
void HeightmapClusterEditable::setSimulateWater(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_HeightmapClusterEditable_setSimulateWater (0x706630)
