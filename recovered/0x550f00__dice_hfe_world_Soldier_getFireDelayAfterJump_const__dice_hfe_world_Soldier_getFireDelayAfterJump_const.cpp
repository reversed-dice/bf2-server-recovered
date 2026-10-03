// FUNCTION: BF2 0x550f00
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x5a0];
    float m_v;
    float get() { return m_v; }
};
float get_0x550f00(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_Soldier_getFireDelayAfterJump_const (0x550f00)
