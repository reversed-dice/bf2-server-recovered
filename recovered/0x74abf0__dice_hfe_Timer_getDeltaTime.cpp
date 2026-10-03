// FUNCTION: BF2 0x74abf0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x18];
    double m_v;
    double get() { return m_v; }
};
double get_0x74abf0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_Timer_getDeltaTime (0x74abf0)
