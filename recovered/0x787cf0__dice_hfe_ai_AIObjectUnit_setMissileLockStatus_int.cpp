// FUNCTION: BF2 0x787cf0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x30];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x787cf0(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectUnit_setMissileLockStatus_int (0x787cf0)
