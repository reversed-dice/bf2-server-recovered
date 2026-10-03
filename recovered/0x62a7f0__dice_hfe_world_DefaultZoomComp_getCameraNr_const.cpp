// FUNCTION: BF2 0x62a7f0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x34];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x62a7f0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultZoomComp_getCameraNr_const (0x62a7f0)
