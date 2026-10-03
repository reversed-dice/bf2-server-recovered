// FUNCTION: BF2 0x642b60
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x14];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x642b60(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_WindAffectorTemplate_getWindIsDynamic_const (0x642b60)
