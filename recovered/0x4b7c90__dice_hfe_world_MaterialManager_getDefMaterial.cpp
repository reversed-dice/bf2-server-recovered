// FUNCTION: BF2 0x4b7c90
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x44];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x4b7c90(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_MaterialManager_getDefMaterial (0x4b7c90)
