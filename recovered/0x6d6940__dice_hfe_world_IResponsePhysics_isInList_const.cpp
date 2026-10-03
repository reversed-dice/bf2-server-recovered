// FUNCTION: BF2 0x6d6940
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x18];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x6d6940(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_IResponsePhysics_isInList_const (0x6d6940)
