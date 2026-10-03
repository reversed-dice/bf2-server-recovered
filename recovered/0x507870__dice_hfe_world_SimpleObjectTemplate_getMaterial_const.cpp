// FUNCTION: BF2 0x507870
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x100];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x507870(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_SimpleObjectTemplate_getMaterial_const (0x507870)
