// FUNCTION: BF2 0x6418f0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x74];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x6418f0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_LightSourceTemplate_getSupportsEmitter (0x6418f0)
