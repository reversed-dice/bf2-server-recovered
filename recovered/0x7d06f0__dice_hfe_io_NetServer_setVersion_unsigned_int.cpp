// FUNCTION: BF2 0x7d06f0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x508];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x7d06f0(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_NetServer_setVersion_unsigned_int (0x7d06f0)
