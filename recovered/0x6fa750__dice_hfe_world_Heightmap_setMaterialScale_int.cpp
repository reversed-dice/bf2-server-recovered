// FUNCTION: BF2 0x6fa750
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xcc];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x6fa750(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_Heightmap_setMaterialScale_int (0x6fa750)
