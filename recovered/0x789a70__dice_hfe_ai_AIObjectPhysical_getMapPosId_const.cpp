// FUNCTION: BF2 0x789a70
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x28];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x789a70(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectPhysical_getMapPosId_const (0x789a70)
