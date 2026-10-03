// FUNCTION: BF2 0x584c90
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x33c];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x584c90(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_OverheadCamera_setTraceObjectId_unsigned_int (0x584c90)
