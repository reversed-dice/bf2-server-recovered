// FUNCTION: BF2 0x76c2e0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x14];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x76c2e0(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIPlayer_setViewDistance_float (0x76c2e0)
