// FUNCTION: BF2 0x7d7570
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xbc];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x7d7570(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_SWConnection_setConnectionId_int (0x7d7570)
