// FUNCTION: BF2 0x787d10
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x34];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x787d10(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectUnit_getMaxAmmo_const (0x787d10)
