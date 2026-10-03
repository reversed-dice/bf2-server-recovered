// FUNCTION: BF2 0x61c6e0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x54];
    float m_v;
    float get() { return m_v; }
};
float get_0x61c6e0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultDetonationComp_getTimeUntilCanDetonate_const (0x61c6e0)
