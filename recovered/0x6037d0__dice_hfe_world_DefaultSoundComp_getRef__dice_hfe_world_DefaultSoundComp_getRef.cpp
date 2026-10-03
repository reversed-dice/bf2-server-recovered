// FUNCTION: BF2 0x6037d0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x28];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x6037d0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultSoundComp_getRef (0x6037d0)
