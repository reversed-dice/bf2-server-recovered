// FUNCTION: BF2 0x4a28d0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x3f0];
    double m_v;
    double get() { return m_v; }
};
double get_0x4a28d0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_Player_getLastTalkTime (0x4a28d0)
