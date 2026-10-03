// FUNCTION: BF2 0x4a47b0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x55c];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x4a47b0(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_ServerGameLogic_setOutputPlayerStats_bool (0x4a47b0)
