// FUNCTION: BF2 0x521640
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x330];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x521640(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObjectTemplate_setDirBarXScale_float (0x521640)
