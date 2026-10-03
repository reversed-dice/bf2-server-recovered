// FUNCTION: BF2 0x4a2970
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x44c];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x4a2970(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_Player_setTracePlayerId_int (0x4a2970)
