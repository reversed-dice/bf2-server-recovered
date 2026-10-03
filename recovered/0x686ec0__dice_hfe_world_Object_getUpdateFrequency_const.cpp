// FUNCTION: BF2 0x686ec0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x1e8];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x686ec0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_Object_getUpdateFrequency_const (0x686ec0)
