// FUNCTION: BF2 0x6f92a0
namespace dice { namespace hfe {
class Heightmap {
public:
    char _pad[0x30];
    int field;
    void setBitResolution(int v);
};
void Heightmap::setBitResolution(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Heightmap_setBitResolution (0x6f92a0)
