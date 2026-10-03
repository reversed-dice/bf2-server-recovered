// FUNCTION: BF2 0x7f01f0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x90];
    float m_v;
    float get() { return m_v; }
};
float get_0x7f01f0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_ControlMap_getMouseSensitivity (0x7f01f0)
