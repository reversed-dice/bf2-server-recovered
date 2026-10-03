// FUNCTION: BF2 0x532bc0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x230];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x532bc0(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ObjectSpawnerTemplate_setUseButtonRadius_float (0x532bc0)
