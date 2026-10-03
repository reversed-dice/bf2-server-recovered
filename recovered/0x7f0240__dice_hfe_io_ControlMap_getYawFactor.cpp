// FUNCTION: BF2 0x7f0240
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xa8];
    float m_v;
    float get() { return m_v; }
};
float get_0x7f0240(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_ControlMap_getYawFactor (0x7f0240)
