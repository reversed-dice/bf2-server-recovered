// FUNCTION: BF2 0x5f4b40
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x15c];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x5f4b40(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_FireComp_getFireState_const__dice_hfe_world_FireComp_getFireState_const (0x5f4b40)
