// FUNCTION: BF2 0x641880
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x71];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x641880(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_LightSourceTemplate_setSupportsPerVertex_bool (0x641880)
