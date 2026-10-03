// FUNCTION: BF2 0x74a530
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x10];
    double m_v;
    double get() { return m_v; }
};
double get_0x74a530(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_System_getExactTime (0x74a530)
