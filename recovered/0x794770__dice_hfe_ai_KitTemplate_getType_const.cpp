// FUNCTION: BF2 0x794770
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x18];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x794770(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_KitTemplate_getType_const (0x794770)
