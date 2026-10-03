// FUNCTION: BF2 0x5b8a50
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x1e0];
    float m_v;
    float get() { return m_v; }
};
float get_0x5b8a50(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ArmorGLCompTemplate_getTimeToStayAsWreck (0x5b8a50)
