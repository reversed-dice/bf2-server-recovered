// FUNCTION: BF2 0x77b8e0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x24];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x77b8e0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_BFTerrain_getWorldMaxZ_const (0x77b8e0)
