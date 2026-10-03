// FUNCTION: BF2 0x7c4780
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x17];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x7c4780(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_NetworkableInfo_getHasRoll_const (0x7c4780)
