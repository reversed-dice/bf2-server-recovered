// FUNCTION: BF2 0x5b4b20
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x20];
    float m_v;
    float get() { return m_v; }
};
float get_0x5b4b20(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ArmorGLComp_getHitPoints (0x5b4b20)
