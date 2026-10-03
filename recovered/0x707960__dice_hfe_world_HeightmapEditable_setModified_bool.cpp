// FUNCTION: BF2 0x707960
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x108];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x707960(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_HeightmapEditable_setModified_bool (0x707960)
