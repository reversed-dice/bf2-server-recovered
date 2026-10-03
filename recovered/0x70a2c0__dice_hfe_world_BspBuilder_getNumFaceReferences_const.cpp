// FUNCTION: BF2 0x70a2c0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x8c];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x70a2c0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_BspBuilder_getNumFaceReferences_const (0x70a2c0)
