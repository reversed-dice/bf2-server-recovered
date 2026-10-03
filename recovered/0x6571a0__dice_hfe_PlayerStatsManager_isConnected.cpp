// FUNCTION: BF2 0x6571a0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xc];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x6571a0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_PlayerStatsManager_isConnected (0x6571a0)
