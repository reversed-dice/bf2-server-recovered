// FUNCTION: BF2 0x770a60
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x8];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x770a60(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_BFGame_getIsPrecaching_const (0x770a60)
