// FUNCTION: BF2 0x4a2270
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xdc];
    float m_v;
    float get() { return m_v; }
};
float get_0x4a2270(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_Player_getEndFov_const (0x4a2270)
