// FUNCTION: BF2 0x78ca20
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x14];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x78ca20(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObject_getSide_const (0x78ca20)
