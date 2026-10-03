// FUNCTION: BF2 0x641940
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x108];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x641940(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_LightSourceTemplate_getProjectorGeometry_const (0x641940)
