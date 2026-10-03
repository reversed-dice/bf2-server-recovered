// FUNCTION: BF2 0x7eb210
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x80];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x7eb210(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_ControlMap_setButtonRiseTime_float (0x7eb210)
