// FUNCTION: BF2 0x4aed10
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x4d4];
    float m_v;
    float get() { return m_v; }
};
float get_0x4aed10(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ServerGameLogic_getTicketLossAtEndPerMin (0x4aed10)
