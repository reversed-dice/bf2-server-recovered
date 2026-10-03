// FUNCTION: BF2 0x7c46a0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x24];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x7c46a0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_NetworkableInfo_getID_const (0x7c46a0)
