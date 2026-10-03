// FUNCTION: BF2 0x7f0220
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xa8];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x7f0220(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_ControlMap_setYawFactor_float (0x7f0220)
