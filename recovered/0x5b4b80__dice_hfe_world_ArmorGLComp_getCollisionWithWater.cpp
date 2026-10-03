// FUNCTION: BF2 0x5b4b80
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x76];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x5b4b80(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ArmorGLComp_getCollisionWithWater (0x5b4b80)
