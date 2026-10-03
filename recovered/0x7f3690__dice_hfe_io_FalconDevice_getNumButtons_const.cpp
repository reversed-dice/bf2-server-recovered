// FUNCTION: BF2 0x7f3690
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x14];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x7f3690(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_FalconDevice_getNumButtons_const (0x7f3690)
