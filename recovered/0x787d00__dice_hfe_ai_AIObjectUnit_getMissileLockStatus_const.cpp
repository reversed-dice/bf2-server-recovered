// FUNCTION: BF2 0x787d00
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x30];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x787d00(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectUnit_getMissileLockStatus_const (0x787d00)
