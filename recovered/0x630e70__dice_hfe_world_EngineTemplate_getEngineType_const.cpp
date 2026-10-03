// FUNCTION: BF2 0x630e70
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x610];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x630e70(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_EngineTemplate_getEngineType_const (0x630e70)
