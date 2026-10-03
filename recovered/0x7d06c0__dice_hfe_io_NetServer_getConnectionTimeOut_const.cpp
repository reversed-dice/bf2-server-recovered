// FUNCTION: BF2 0x7d06c0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x50c];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x7d06c0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_NetServer_getConnectionTimeOut_const (0x7d06c0)
