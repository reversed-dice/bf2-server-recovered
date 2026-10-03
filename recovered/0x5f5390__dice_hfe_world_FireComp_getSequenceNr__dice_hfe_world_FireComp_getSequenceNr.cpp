// FUNCTION: BF2 0x5f5390
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x4c];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x5f5390(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_FireComp_getSequenceNr (0x5f5390)
