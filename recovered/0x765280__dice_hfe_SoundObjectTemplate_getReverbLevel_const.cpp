// FUNCTION: BF2 0x765280
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x90];
    float m_v;
    float get() { return m_v; }
};
float get_0x765280(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_SoundObjectTemplate_getReverbLevel_const (0x765280)
