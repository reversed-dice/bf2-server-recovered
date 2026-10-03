// FUNCTION: BF2 0x6871b0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x210];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x6871b0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_Object_getNotInAI_const (0x6871b0)
