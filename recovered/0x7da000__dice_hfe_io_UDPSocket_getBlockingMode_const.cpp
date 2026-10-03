// FUNCTION: BF2 0x7da000
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x2f];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x7da000(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_UDPSocket_getBlockingMode_const (0x7da000)
