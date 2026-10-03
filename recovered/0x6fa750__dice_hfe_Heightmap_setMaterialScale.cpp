// FUNCTION: BF2 0x6fa750
namespace dice { namespace hfe {
class Heightmap {
public:
    char _pad[0xcc];
    int field;
    void setMaterialScale(int v);
};
void Heightmap::setMaterialScale(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Heightmap_setMaterialScale (0x6fa750)
