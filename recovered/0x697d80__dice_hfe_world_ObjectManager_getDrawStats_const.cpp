// FUNCTION: BF2 0x697d80
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x2a0];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x697d80(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ObjectManager_getDrawStats_const (0x697d80)
