// FUNCTION: BF2 0x5e96e0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x248];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x5e96e0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArmTemplate_getItemIndex_const (0x5e96e0)
