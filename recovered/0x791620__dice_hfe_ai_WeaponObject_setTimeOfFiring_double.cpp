// FUNCTION: BF2 0x791620
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x30];
    double m_v;
    void set(double v) { m_v = v; }
};
void set_0x791620(Accessor* p, double v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_WeaponObject_setTimeOfFiring_double (0x791620)
