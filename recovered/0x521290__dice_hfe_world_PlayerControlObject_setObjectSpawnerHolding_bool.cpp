// FUNCTION: BF2 0x521290
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x3f0];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x521290(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObject_setObjectSpawnerHolding_bool (0x521290)
