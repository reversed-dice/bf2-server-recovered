// FUNCTION: BF2 0x791630
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x30];
    double m_v;
    double get() { return m_v; }
};
double get_0x791630(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_WeaponObject_getTimeOfFiring_const (0x791630)
