// FUNCTION: BF2 0x787d80
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x28];
    double m_v;
    double get() { return m_v; }
};
double get_0x787d80(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectUnit_getLastPlayerPossesionTime_const (0x787d80)
