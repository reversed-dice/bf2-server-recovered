// FUNCTION: BF2 0x7652c0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x94];
    float m_v;
    float get() { return m_v; }
};
float get_0x7652c0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_SoundObjectTemplate_getSoundRadius_const (0x7652c0)
