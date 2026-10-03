// FUNCTION: BF2 0x4b7b20
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x35];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x4b7b20(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_Material_getHasWaterPhysics_const (0x4b7b20)
