// FUNCTION: BF2 0x7f0200
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x94];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x7f0200(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_ControlMap_setKeyboardSensitivity_float (0x7f0200)
