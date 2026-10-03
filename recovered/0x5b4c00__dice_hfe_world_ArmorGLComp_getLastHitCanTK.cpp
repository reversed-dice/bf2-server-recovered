// FUNCTION: BF2 0x5b4c00
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x60];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x5b4c00(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ArmorGLComp_getLastHitCanTK (0x5b4c00)
