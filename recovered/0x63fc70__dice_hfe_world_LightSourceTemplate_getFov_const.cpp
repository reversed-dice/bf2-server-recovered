// FUNCTION: BF2 0x63fc70
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xd0];
    float m_v;
    float get() { return m_v; }
};
float get_0x63fc70(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_LightSourceTemplate_getFov_const (0x63fc70)
