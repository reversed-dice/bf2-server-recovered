// FUNCTION: BF2 0x63fb00
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x78];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x63fb00(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_LightSourceTemplate_getLightTypeEnum_const (0x63fb00)
