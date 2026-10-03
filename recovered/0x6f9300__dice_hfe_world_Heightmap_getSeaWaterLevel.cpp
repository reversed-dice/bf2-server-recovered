// FUNCTION: BF2 0x6f9300
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x58];
    float m_v;
    float get() { return m_v; }
};
float get_0x6f9300(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_Heightmap_getSeaWaterLevel (0x6f9300)
