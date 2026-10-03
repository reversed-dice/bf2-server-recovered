// FUNCTION: BF2 0x436430
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x1e0];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x436430(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ClientConnection_getDemoMode_const__dice_hfe_ClientConnection_getDemoMode_const (0x436430)
