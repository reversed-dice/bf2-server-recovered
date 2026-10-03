// FUNCTION: BF2 0x6f92d0
namespace dice { namespace hfe {
class Heightmap {
public:
    char _pad[0x54];
    bool field;
    void setUsePhongNormalInterpolation(bool v);
};
void Heightmap::setUsePhongNormalInterpolation(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Heightmap_setUsePhongNormalInterpolation (0x6f92d0)
