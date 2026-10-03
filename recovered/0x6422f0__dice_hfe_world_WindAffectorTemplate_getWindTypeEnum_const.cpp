// FUNCTION: BF2 0x6422f0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x18];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x6422f0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_WindAffectorTemplate_getWindTypeEnum_const (0x6422f0)
