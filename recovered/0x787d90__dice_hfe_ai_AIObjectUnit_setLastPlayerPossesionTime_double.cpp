// FUNCTION: BF2 0x787d90
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x28];
    double m_v;
    void set(double v) { m_v = v; }
};
void set_0x787d90(Accessor* p, double v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectUnit_setLastPlayerPossesionTime_double (0x787d90)
