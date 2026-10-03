// FUNCTION: BF2 0x697dc0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x29c];
    float m_v;
    float get() { return m_v; }
};
float get_0x697dc0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ObjectManager_getMinCullDistance (0x697dc0)
