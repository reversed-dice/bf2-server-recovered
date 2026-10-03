// FUNCTION: BF2 0x4a2990
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x438];
    float m_v;
    float get() { return m_v; }
};
float get_0x4a2990(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_Player_getBlurValue_const (0x4a2990)
