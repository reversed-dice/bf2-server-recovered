// FUNCTION: BF2 0x4be240
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x60];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x4be240(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ObjectTemplate_setCullRadiusScale_float (0x4be240)
