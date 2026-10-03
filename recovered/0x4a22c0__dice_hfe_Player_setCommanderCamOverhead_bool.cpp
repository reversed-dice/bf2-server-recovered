// FUNCTION: BF2 0x4a22c0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xab];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x4a22c0(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_Player_setCommanderCamOverhead_bool (0x4a22c0)
