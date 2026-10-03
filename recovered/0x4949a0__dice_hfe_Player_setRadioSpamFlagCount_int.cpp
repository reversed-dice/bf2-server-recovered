// FUNCTION: BF2 0x4949a0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x1b4];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x4949a0(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_Player_setRadioSpamFlagCount_int (0x4949a0)
