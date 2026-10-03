// FUNCTION: BF2 0x7c4770
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x16];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x7c4770(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_NetworkableInfo_getHasPitch_const (0x7c4770)
