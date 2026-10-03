// FUNCTION: BF2 0x7f01b0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x18];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x7f01b0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_ControlMap_getID_const (0x7f01b0)
