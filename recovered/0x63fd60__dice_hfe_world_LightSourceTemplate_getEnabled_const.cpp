// FUNCTION: BF2 0x63fd60
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xd8];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x63fd60(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_LightSourceTemplate_getEnabled_const (0x63fd60)
