// FUNCTION: BF2 0x7d06b0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x50c];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x7d06b0(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_NetServer_setConnectionTimeOut_unsigned_int (0x7d06b0)
