// FUNCTION: BF2 0x7c4760
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x15];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x7c4760(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_NetworkableInfo_getHasYaw_const (0x7c4760)
