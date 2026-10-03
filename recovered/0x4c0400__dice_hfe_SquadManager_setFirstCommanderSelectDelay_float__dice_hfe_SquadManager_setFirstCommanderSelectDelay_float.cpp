// FUNCTION: BF2 0x4c0400
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x40];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x4c0400(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_SquadManager_setFirstCommanderSelectDelay_float (0x4c0400)
