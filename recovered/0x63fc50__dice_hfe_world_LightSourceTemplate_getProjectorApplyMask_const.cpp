// FUNCTION: BF2 0x63fc50
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xf8];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x63fc50(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_LightSourceTemplate_getProjectorApplyMask_const (0x63fc50)
