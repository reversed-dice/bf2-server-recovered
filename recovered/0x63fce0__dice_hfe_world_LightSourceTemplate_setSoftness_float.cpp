// FUNCTION: BF2 0x63fce0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x118];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x63fce0(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_LightSourceTemplate_setSoftness_float (0x63fce0)
