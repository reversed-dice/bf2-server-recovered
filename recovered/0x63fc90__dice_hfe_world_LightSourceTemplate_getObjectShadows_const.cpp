// FUNCTION: BF2 0x63fc90
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x110];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x63fc90(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_LightSourceTemplate_getObjectShadows_const (0x63fc90)
