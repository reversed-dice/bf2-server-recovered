// FUNCTION: BF2 0x4aece0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x4a8];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x4aece0(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_ServerGameLogic_setDefaultTimeToNextAIWave_float (0x4aece0)
