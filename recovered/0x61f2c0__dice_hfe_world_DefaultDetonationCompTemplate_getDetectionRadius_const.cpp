// FUNCTION: BF2 0x61f2c0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x7c];
    float m_v;
    float get() { return m_v; }
};
float get_0x61f2c0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultDetonationCompTemplate_getDetectionRadius_const (0x61f2c0)
