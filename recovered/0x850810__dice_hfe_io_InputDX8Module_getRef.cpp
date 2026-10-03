// FUNCTION: BF2 0x850810
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x8];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x850810(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_InputDX8Module_getRef (0x850810)
