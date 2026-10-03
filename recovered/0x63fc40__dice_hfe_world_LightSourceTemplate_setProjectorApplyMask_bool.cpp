// FUNCTION: BF2 0x63fc40
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xf8];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x63fc40(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_LightSourceTemplate_setProjectorApplyMask_bool (0x63fc40)
