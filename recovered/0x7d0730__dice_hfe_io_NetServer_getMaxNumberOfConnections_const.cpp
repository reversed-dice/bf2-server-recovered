// FUNCTION: BF2 0x7d0730
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x49c];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x7d0730(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_NetServer_getMaxNumberOfConnections_const (0x7d0730)
