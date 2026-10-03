// FUNCTION: BF2 0x5aee20
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x1c];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x5aee20(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_AbilityGLCompTemplate_setRadarRadius_int (0x5aee20)
