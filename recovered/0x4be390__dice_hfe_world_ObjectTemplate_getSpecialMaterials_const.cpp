// FUNCTION: BF2 0x4be390
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x64];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x4be390(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ObjectTemplate_getSpecialMaterials_const (0x4be390)
