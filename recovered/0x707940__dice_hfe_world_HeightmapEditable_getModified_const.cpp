// FUNCTION: BF2 0x707940
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x108];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x707940(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_HeightmapEditable_getModified_const (0x707940)
