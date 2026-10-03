// FUNCTION: BF2 0x608330
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x58];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x608330(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_SimpleTargetCompTemplate_getRef (0x608330)
