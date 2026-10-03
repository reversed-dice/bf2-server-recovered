// FUNCTION: BF2 0x4b7a80
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x24];
    float m_v;
    float get() { return m_v; }
};
float get_0x4b7a80(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_Material_getDamageLoss_const (0x4b7a80)
