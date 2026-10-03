// FUNCTION: BF2 0x521700
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x33c];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x521700(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObjectTemplate_setDirBarRotate_float (0x521700)
