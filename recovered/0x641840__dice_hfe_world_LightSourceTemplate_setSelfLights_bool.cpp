// FUNCTION: BF2 0x641840
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x70];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x641840(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_LightSourceTemplate_setSelfLights_bool (0x641840)
