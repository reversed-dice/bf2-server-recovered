// FUNCTION: BF2 0x74ac00
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x20];
    double m_v;
    double get() { return m_v; }
};
double get_0x74ac00(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_Timer_getTime (0x74ac00)
