// FUNCTION: BF2 0x641910
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x75];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x641910(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_LightSourceTemplate_getAffectLightmappedObjects_const (0x641910)
