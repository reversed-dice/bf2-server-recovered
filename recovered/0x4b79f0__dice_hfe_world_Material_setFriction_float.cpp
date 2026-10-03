// FUNCTION: BF2 0x4b79f0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x14];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x4b79f0(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_Material_setFriction_float (0x4b79f0)
