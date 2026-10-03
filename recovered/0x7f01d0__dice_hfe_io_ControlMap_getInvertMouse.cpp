// FUNCTION: BF2 0x7f01d0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x8c];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x7f01d0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_ControlMap_getInvertMouse (0x7f01d0)
