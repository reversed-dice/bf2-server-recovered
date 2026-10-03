// FUNCTION: BF2 0x5d4510
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x70];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x5d4510(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_PlayerControlObjectNetworkable_getRef (0x5d4510)
