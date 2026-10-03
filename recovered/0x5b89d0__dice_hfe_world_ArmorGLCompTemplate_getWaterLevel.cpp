// FUNCTION: BF2 0x5b89d0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x1cc];
    float m_v;
    float get() { return m_v; }
};
float get_0x5b89d0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ArmorGLCompTemplate_getWaterLevel (0x5b89d0)
